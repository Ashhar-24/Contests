#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s; cin>>s;

    map <char, int> mp;
    for(int i=0; i<s.length(); i++){
        mp[s[i]]++;
    }

    int minocc=INT_MAX;
    char key;

    for(auto x:mp){
        int temp= x.second;
        minocc=min(minocc, temp);
        if(minocc==temp){
            key=x.first;
        }
    } 
    // cout<<key<<" "<<minocc<<" ";
    if(minocc==1) cout<<0<<'\n';
    else{
        int index=-1;
        for(int i=0; i<s.length(); i++){
            if(s[i]==key){
                index=i;
                break;
            }
        }
        // cout<<index<<" ";
        
        int j= index+1, ct=0;
        minocc--; 
        while(minocc>=0 or j<s.length()){
            if(s[j]==key){
                minocc--;
            }
            else{
                ct++;
            }
            j++;
        }

        // cout<<ct<<'\n';
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

