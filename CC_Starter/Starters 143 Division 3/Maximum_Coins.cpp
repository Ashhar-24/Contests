#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define fore(i,a,b) for(int i = a; i < b; i++)
using namespace std;

bool isprime(int n){
    if(n==1)return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0)return false;
    }
    return true;
}

void solve(){
    int n,k; cin>>n>>k;
    int ct=0;
    int temp=k;
    for(int i=n; i>=1 and temp>0 ; i--){
        ct+= pow(2,i);
        temp--;
    }

    for(int i=1; i<= (n-k); i++){
        ct-= pow(2,i);
    }

    cout<<ct<<'\n';
}	


signed main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}