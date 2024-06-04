#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    bool good=1;
    for(int i=0; i<n; i++){
        if(v[i]<=4){
            good=0;
            break;
        }
    }

    if(good) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}