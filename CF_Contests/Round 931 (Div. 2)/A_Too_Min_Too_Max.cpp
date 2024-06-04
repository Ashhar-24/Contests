#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    vector <int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());
    int ans= 2*(abs(v[n-1]-v[0])+abs(v[n-2]-v[1]));
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