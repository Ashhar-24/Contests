#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int a,b; cin>>a>>b;
    
    int reva=0, revb=0;
    int temp=a;
    while(temp){
        reva=reva*10+temp%10;
        temp=temp/10;
    }
    temp=b;
    while(temp){
        revb=revb*10+temp%10;
        temp=temp/10;
    }

    if(a>b) cout<<"Yes"<<'\n';
    else if(a>revb) cout<<"Yes"<<'\n';
    else if(reva>b) cout<<"Yes"<<'\n';
    else if(reva>revb) cout<<"Yes"<<'\n';
    else cout<<"No"<<'\n';
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}