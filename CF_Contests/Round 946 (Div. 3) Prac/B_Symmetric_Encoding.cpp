#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    string s; cin>>s;

    set<char> st;
    for(auto x:s){
        st.insert(x);
    }

    string r;
    for(auto x:st){
        r.push_back(x);
    }
    // cout<<r<<" ";

    map<char,char>mp;

    for(int i=0; i<r.size(); i++){
        mp[r[i]]=r[r.size()-1-i];
    }

    string ans="";
    for(auto x:s){
        char c= mp[x];
        ans.push_back(c);
    }
    cout<<ans<<'\n';
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}