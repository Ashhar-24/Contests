#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    int Aa[n], Da[n], Ap[n], Dp[n];
    int aa=0, da=0, ap=0, dp=0;
    for(int i=0; i<n; i++){
        cin>>Aa[i];
        aa+=Aa[i];
    } 
    for(int i=0; i<n; i++){
        cin>>Da[i];
        da+=Da[i];
    } 
    for(int i=0; i<n; i++){
        cin>>Ap[i];
        ap+=Ap[i];
    } 
    for(int i=0; i<n; i++){
        cin>>Dp[i];
        dp+=Dp[i];
    } 

    if(aa>ap and da>dp) cout<<"A"<<'\n';
    else if(ap>aa and dp>da) cout<<"P"<<'\n';
    else cout<<"DRAW"<<'\n';

}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}