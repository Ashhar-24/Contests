#include <bits/stdc++.h>
#define long long ll
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int sum=0;
    for(int i=0; i<n; i++) sum+=abs(v[i]);

    cout<<sum<<'\n';
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}