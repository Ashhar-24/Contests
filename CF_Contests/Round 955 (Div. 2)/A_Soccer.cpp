#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;

    if(x1==x2 and y1==y2)cout<<"YES"<<'\n';
    else if(x1>y1){
        if(x2>y2) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    else if(x1<y1){
        if(x2<y2) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
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