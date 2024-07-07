#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, k, h; cin >> n >> k >> h;
    ll ans=0;
    for(ll i=1; i<=n; i++){
        if (i>=h){
            ans+=n;
            continue;
        }
        // int req = ceil((h-i)/(double)(k-1));
        int req= (h-i)/(k-1);
        if((h-i)%(k-1)!=0)req++;    // another way of taking ceil

        int b= i - req; 
        if(b>=0)ans+=b;
    }
    cout<<ans<<'\n';
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
// upsolve