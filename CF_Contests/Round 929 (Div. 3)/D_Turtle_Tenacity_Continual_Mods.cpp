#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];



    // sort(v.begin(), v.end());



    // bool possible=0;
    // for(ll i=0; i<n-1; i++){
    //     if(v[i]==v[i+1]) possible=1;
    // }
    // if(possible) cout<<"NO"<<'\n';
    // else{

    // }

    ll mine=LONG_LONG_MAX;
    for(int i=0; i<n; i++){
        mine=min(mine, v[i]);
    }


    if(mine==1) cout<<"YES"<<'\n';
    else{
        int ct=0;
        for(int i=0; i<n; i++){
            if(v[i]==mine) ct++;
        }
         
        if(ct>=2){
            bool ispre=1;
            for(int i=0; i<n; i++){
                if(v[i]%mine==0){
                    ispre=0;
                    break;
                }
            }
            if(ispre) cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';

        }
        else{
            cout<<"YES"<<'\n';
        }

    }


}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}