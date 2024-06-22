#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n,m; cin>>n>>m;

    if(n>m){
        cout<<n-m<<endl;
    }

    // else if(m%n==0){
    //     cout<<0<<endl;
    // }
    // else{
    //     int rem= m%n;
    //     if(rem<= (n/2)){
    //         cout<<rem<<endl;
    //     }
    //     else{
    //         cout<<n-rem<<endl;
    //     }
    // }
    // Alternative approach
    else{
        int ans= min(m%n, n-m%n);
        cout<<ans<<endl;
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