#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;

    int ans;
    if((a+b+c)%2!=0) ans=-1;
    else if(a+b>=c) ans=(a+b+c)/2;
    else ans= a+b;

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

// Round 945 A