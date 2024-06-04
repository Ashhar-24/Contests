#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m; cin>>n>>m;
    string s; cin>>s;
    map<char,int>mp;
    for(char c = 'A'; c <= 'G'; c++) {
        mp[c] = 0;
    }

    for(int i=0; i<s.size(); i++){
        mp[s[i]]++;
    }

    int ct=0;
    for(char c='A'; c<='G'; c++){
        if(mp[c]<m){
            ct+=(m-mp[c]);
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