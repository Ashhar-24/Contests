#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll a,b,l; cin>>a>>b>>l;
    int ct=0;
    unordered_set <ll> prod;

    // for(ll i=0; i<=l; i++){
    //     for(ll j=0; j<=l; j++){
    //         ll pro= pow(a,i)*pow(b,j);
    //         if(prod.find(pro)==prod.end() && l%pro==0 ) ct++;
    //     }
    // }
    ll i=1, j=1;
    while(i<=l){
        while(j<=l){
            ll pro=i*j;
            if(prod.find(pro)==prod.end() && l%pro==0 ){
                ct++;
                prod.insert(pro);
            } 

            j=j*b;
        }
        i=i*a;
        j=1;
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