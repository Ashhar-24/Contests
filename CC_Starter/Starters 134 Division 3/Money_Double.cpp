#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int x,y; cin>>x>>y;
    if(x<1000){
        x+=1000; 
        y--;
    } 
        while(y>0){
        x*=2;
        y--;
        }
    cout<<x<<'\n';
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}