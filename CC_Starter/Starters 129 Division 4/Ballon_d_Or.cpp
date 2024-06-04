#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    // long long prod=1;
    int ct=0;
    for(int i=0; i<n; i++){
        cin>>v[i];
        // prod*=v[i];
        if(v[i]==2) ct++;
    }
    if(ct%8==0)cout<<"YES"<<'\n';
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