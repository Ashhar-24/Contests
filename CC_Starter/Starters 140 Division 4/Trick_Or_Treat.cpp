#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n,m; cin>>n>>m;
    vector<ll>a(n);
    vector<ll>b(n);
    for(auto &x:a) cin>>x;
    for(auto &x:b) cin>>x;

    for(ll i=0; i<n; i++){
        a[i]=a[i]%m;
        b[i]=b[i]%m;
    }

    /*
        Modulo property:
        (a+b)%m = (a%m + b%m)%m
        ie, for (a+b)%m==0 => (a%m + b%m)%m == 0 
    */

    map<ll,ll>mp;
    for(ll i=0; i<n; i++){
        mp[b[i]]++;
    }

    ll ct=0;

    for(ll i=0; i<n; i++){
        ll rem=(m-a[i])%m;      
        // have done an extra %m to handle the case when a[i] is ==0, them m-a[i]==m while 0<=b[i]<m.

        //searching rem in mp
        if(mp.find(rem)!=mp.end()){
            ct+=mp[rem];
        }
    }
    
    cout<<ct<<'\n';
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}