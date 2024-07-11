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
    int x; cin>>x;

    ll a,b;
    if(x==1 || x==2){
        cout<<6<<'\n';
        return;
    }

    for(ll i=x; ; i++){
        if(isprime(i)){
            a=i;
            break;
        }
    }

    for(ll i=a+1; ; i++){
        if(isprime(i)){
            b=i;
            break;
        }
    }

    cout<<a*b<<'\n';
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}