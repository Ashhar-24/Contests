#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)cin>>v[i];

    set<int> s;
    int ans=0, cur=0;
    for(int i=0; i<n; i++){
        cur+=v[i];
        s.insert(v[i]);
        float r= cur/2.0;
        if(s.count(r))ans++;
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