#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    if (n<8) cout<<"LESS"<<'\n';
    else if (n==8) cout<<"PERFECT"<<'\n';
    else cout<<"MORE"<<'\n';
}	


int main() {
    int t=1; 
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;
}