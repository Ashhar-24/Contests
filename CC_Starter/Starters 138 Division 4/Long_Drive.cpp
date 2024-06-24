#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int x,y; cin>>x>>y;

    int ct=1, ans=0;
    while(true){
        for(int i=1; i<=100; i++){
            if(((10*x + i*ct)/(10+ct))==y){
                ans=ct;
            }
        }
        if(ans!=0) break;
        else ct++;
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