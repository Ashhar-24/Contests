#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isprime(ll n){
    if(n==1)return false;
    for(ll i=2; i<=sqrt(n); i++){
        if(n%i==0)return false;
    }
    return true;
}

void solve(){
    int n,k; cin>>n>>k;

    vector<int>v(k);
    for(auto &x: v)cin>>x;
    sort(v.begin(), v.end());

    ll ans=0;
    for(int i=0; i<=k-2; i++){
        ans+= (2*v[i]-1);
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