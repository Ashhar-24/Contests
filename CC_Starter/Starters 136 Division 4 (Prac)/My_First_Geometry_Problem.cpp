#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s; cin>>s;
    
    // int ans=0, ct=0;
    // for(int i=0; i<s.size(); i++){
    //     if(s[i]=='1')ct++;
    // }
    // bool l=s[0]-'0', r=s[1]-'0', u=s[2]-'0', d=s[3]-'0';

    // if (ct==1){
    //     ans=11;
    // }
    // else if(ct==2){
    //     if ((l and r) or (u and d))ans=21;
    //     else ans=121;
    // }
    // else if(ct==3) ans=231;
    // else{
    //     ans=441;
    // }

    // cout<<ans<<'\n';

    // Easier approach.

    int leftright=1, updown=1;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='1' and i<2) leftright+=10;
        if(s[i]=='1' and i>=2) updown+=10;
    }

    cout<<leftright*updown<<'\n';
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}