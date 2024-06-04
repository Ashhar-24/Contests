#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n; cin>>n;
    ll ans=0;
    ll ct=n/9, rem=n%9;
    ans= (45*ct)+ (rem*(rem+1)/2);
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