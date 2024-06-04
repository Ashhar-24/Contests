#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int x, y; cin>>x>>y;
    int two= ceil((y)/2.0);
    int rem= (two*15) - (4*y);
    if(rem<x){
        two+= ceil((x-rem)/15.0);
    }
    cout<<two<<'\n';
}


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}