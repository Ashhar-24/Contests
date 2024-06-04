#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int ans= n* (n+1)/2;
    map<int,int>pf;
    int val=0;
    pf[0]++;
    
    for(auto x:s){
        if(x=='1') val++;
        else val--;

        ans+=pf[val];
        pf[val]++;
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

// Upsolve