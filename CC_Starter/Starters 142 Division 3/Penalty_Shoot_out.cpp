#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int x,y; cin>>x>>y;
    if(x+2==y+1)cout<<"YES\n";
    else if(x+2==y+0)cout<<"YES\n";
    else if(x+1==y+1)cout<<"YES\n";
    else if(x+1==y+0)cout<<"YES\n";
    else if(x+0==y+1)cout<<"YES\n";
    else if(x+0==y+0)cout<<"YES\n";
    
    else cout<<"NO\n";
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}