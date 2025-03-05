#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define fore(i,a,b) for(int i = a; i < b; i++)
#define revfore(i,a,b) for(int i = a; i >= b; i--)
#define all(v) v.begin(), v.end()
#define endl '\n'
 
int gcd(int a, int b){
    while(b){
        a %= b;
        swap(a, b);
    }
    return a;
}
 
void solve(){
    int n; 
    cin >> n;
    
    vector<int> v(n+1);
    fore(i, 1, n+1) {
        cin >> v[i];
    }
    
    vector<int> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59};
    
    vector<vector<int>> adj(n+1);
    fore(i, 1, n){
        int u, w; 
        cin >> u >> w;
        adj[u].pb(w);
        adj[w].pb(u);
    }
    
    vector<int> ans(n+1, 0);
    
    fore(i, 1, n+1){
        vector<int> stk;
        stk.pb(i);
        vector<int> parent(n+1, 0);
        vector<int> pathgcd(n+1, 0);
        pathgcd[i] = v[i];
 
        while(!stk.empty()){
            int curr = stk.back(); 
            stk.pop_back();
            
            int g = pathgcd[curr];
            int mex = 0;
            for(int x : prime){
                if(g % x != 0){
                    mex = x;
                    break;
                }
            }
            if(mex == 0)mex = 61; 
            ans[i] += mex; 
            for(int nxt : adj[curr]){
                if(nxt == parent[curr])
                    continue;
                parent[nxt] = curr;
                pathgcd[nxt] = gcd(pathgcd[curr], v[nxt]);
                stk.pb(nxt);
            }
        }
    }
    
    fore(i, 1, n+1){
        cout << ans[i] << (i == n ? "\n" : " ");
    }
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
