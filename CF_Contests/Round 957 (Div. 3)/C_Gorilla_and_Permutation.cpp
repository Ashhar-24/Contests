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
    int n,m,k; cin >> n >> m >> k;

    for(int i=n; i>m; i--)cout<<i <<" ";
    for(int i=1; i<=m; i++)cout<<i <<" ";
    cout<<'\n';
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}