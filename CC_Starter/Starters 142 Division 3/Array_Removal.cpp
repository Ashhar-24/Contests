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
    int n; cin>>n;
    vector<int> v(n);
    for(auto &x: v)cin>>x;
    
    vector<int>setbits(64,0);

// storing all the set bits of the nos given in array
    
    for(int i=0; i<n;i++){
        int x = v[i];
        int ind=0;
        while(x>0){
            setbits[ind]+=x&1;
            x>>=1;
            ind++;
        }
    }

    int num=0;
    for(int i=0; i<64; i++){
        if(setbits[i]==0)break;
        num+=1<<i;
    }
    // cout<<num<<'\n';

    int ct=0;
    for(int i=0; i<n; i++){
        if(num<v[i]){
            ct++;
            // cout<<v[i]<<" ";
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

// upsolve