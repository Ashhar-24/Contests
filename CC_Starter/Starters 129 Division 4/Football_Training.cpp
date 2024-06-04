#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int x,y; cin>>x>>y;
    if(x>y) cout<<"FREEKICK"<<'\n';
    else cout<<"PENALTY"<<'\n';
}	


int main() {
    int t=1; 
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;
}