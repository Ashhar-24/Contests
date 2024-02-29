#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    char c[2][n];
    for(int i=0; i<2; i++){
        for(int j=0; j<n; j++) cin>>c[i][j];
    }

    int ct=1;
    string ans="";
    ans=c[0][0];
    int i=0, j=0;
    while(j<n-1){
        if(c[i][j+1]<=c[i+1][j]){
            // if(c[i][j+1]==c[i+1][j]) ct++;
            ans+=c[i][j+1];
            j++;
        } 
        else {
            ans+=c[i+1][j];
            j++;
        }
    }
    ans+=c[1][n-1];

    i=ans.length()-1, j=n-1; int k=1;

    while(i>=0){
        if(ans[i-1]==c[j-1][k]){
            if(c[j-2][k]==c[j-1][k-1]) ct++;
            j--;
            i--;
        }
        else{
            k--;
            i--;
        }
    }

    // for(int i=n-1; i>=0 and j>=0;){
    //     if 


    //     if(c[i][j-1]==c[i-1][j]){
    //         ct++;
    //     } 
    // }

    cout<<ans<<'\n';
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