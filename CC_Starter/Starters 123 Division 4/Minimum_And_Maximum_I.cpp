#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    int ans=0;
    int x= n/2;

    if(n%2==0){
        ans=(n*(n+2))/4;
    }

    else{
        ans=(x*(x+1))+(x+1);
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