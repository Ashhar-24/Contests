#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n,m; cin>>n>>m;
    vector<int> v(n);
    for(auto &x:v)cin>>x;

    int ct=0, sum=0;
    for(int i=0; i<n; i++){
        sum+= v[i];
        if(sum<=m)ct++;
        else break;
    }

    cout<<ct;

}	


int main() {
    int t=1; 
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;
}