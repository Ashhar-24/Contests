#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define fore(i,a,b) for(int i = a; i < b; i++)
#define revfore(i,a,b) for(int i = a; i >= b; i--)
#define all(v) v.begin(), v.end()
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define endl '\n'
#define INF 1e18
#define mod 1e9+7
#define debug(x) cout<<x<<endl 
// int expo(int a, int b) {int res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}		// (a^b)%m
// bool isprime(int n){ if(n==1)return false; for(int i=2; i<=sqrt(n); i++){ if(n%i==0)return false;} return true;}
// vector<int> convertbinary64(int n){ vector<int> v(64,0); int i=0; while(n>0){ v[i]=n%2; n/=2; i++;} return v;}   // this represents the binary form in reverse manner
// int convertdecimal(vector<int> v){int ans=0; for(int i=0; i<64; i++){ ans+=v[i]*pow(2,i);}return ans;}

void solve(){
    int n,x; cin>>n>>x;
    vector<int>v(n);
    unordered_map<int,int>mp;
    unordered_map<int, vector<int>>pos;
    fore(i,0,n){
        cin>>v[i];
        mp[v[i]]++;
        pos[v[i]].push_back(i);
    }
    if(x==1){
        int temp=0;
        for(auto& x: mp){
            temp = max(temp, x.second);
        }
        cout<<temp<<endl; return;
    }

    int ans=0;
    for(auto& x: mp)ans = max(ans, x.second);

    for(auto& p: pos){
        int u = p.first, v = u*x;
        int base = (mp.count(v) ? mp[v] : 0);
        int best = 0;
        vector<pair<int,int>> mex;
        if(pos.count(u)){
            for(auto& i: pos[u]) mex.pb({i, 1});
        }
        
        if(pos.count(v)){
            for(auto& i: pos[v]) mex.pb({i, -1});
        }

        if(mex.empty()) continue;

        sort(all(mex), [](auto&a, auto& b){
            return a.first>b.first;
        });

        int curr = 0;
        for(auto& p: mex){
            curr += p.second;
            if(curr<0) curr = 0;
            best = max(best, curr);
        }
        ans=max(ans, base+best);
    }

    cout<<ans<<endl;
}	


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}