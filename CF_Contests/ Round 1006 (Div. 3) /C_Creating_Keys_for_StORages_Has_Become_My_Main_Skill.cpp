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
using namespace std;

bool allowed(int i, int x) {
    return (i & ~x) == 0;
}

void solve(){
    int n;
        int x;
        cin >> n >> x;
        
        if(x == 0){
            for (int i = 0; i < n; i++){
                cout << 0 << " ";
            }
            cout << endl; return;
        }
        
        int tempm = n + 1;
        for (int i = 0; i <= n; i++){
            if(!allowed(i, x)){
                tempm = i;
                break;
            }
        }
        int optm = 0;
        for (int m = 1; m <= n && m <= tempm; m++){

            int p = 0;
            int temp = m;

            while((1 << p) < m) p++;
            int fOR = (p == 0 ? 0 : ((1 << p) - 1));
            if(fOR == x){

                optm = m; 
            } else {

                if(n - m >= 1){
                    optm = m;
                }
            }
        }

        vector<int> res;
        if(optm > 0){
            for (int i = 0; i < optm; i++){
                res.push_back(i);
            }
            int p = 0;
            while((1 << p) < optm) p++;
            int fOR = (p == 0 ? 0 : ((1 << p) - 1));
            
            int extraCount = n - optm;
            if(extraCount > 0){
                if(fOR == x){

                    for (int i = 0; i < extraCount; i++){
                        res.push_back(0);
                    }
                } else {

                    for (int i = 0; i < extraCount; i++){
                        res.push_back(x);
                    }
                }
            }
        } else {

            for (int i = 0; i < n; i++){
                res.push_back(x);
            }
        }

        for (int x : res){
            cout << x << " ";
        }
        cout << endl;
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