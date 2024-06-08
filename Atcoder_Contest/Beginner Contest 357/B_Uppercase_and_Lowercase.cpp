#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s; cin>>s;
    int lc=0, up=0;

    for(int i=0; i<s.size(); i++){
        if(s[i]>='a' and s[i]<='z') lc++;
        else if(s[i]>='A' and s[i]<='Z') up++;
    }

    if(up>lc){
        // string temp="";
        for(int i=0; i<s.size(); i++){
            if(s[i]>='a' and s[i]<='z')s[i]=s[i]-32;
        }
    }
    else {
        for(int i=0; i<s.size(); i++){
            if(s[i]>='A' and s[i]<='Z')s[i]=s[i]+32;
        }
    }
    
    cout<<s<<'\n';
}	


int main() {
    int t=1; 
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;
}