#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
//     A stair satisfies the condition a<b<c
// .
// A peak satisfies the condition a<b>c
// . 

    if(b>a and b<c) cout<<"STAIR"<<'\n';
    else if(b>a and b>c) cout<<"PEAK"<<'\n';
    else cout<<"NONE"<<'\n';
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}