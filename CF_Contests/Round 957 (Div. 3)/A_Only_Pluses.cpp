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
    int a,b,c; cin >> a >> b >> c;
    int prod= 1;

    for(int i=0; i<=5; i++){
        for(int j=0; j<=5; j++){
            for(int k=0; k<=5; k++){
                if (i+j+k==5) prod=max(prod, (a+i)*(b+j)*(c+k));
            }
        }
    }

    cout<<prod<<'\n';
}


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}