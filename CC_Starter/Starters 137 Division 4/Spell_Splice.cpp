#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    int v[n][2];
    for(int i=0; i<n; i++){
        cin>>v[i][0];
        cin>>v[i][1];
    }

    ll maxi=INT_MIN;
    for(int i=0; i<n; i++){
        // ll prod= (v[i][0]*v[i][1])+(v[i][1]*)
        for(int j=i+1; j<n; j++){
            ll prod= (v[i][0]*v[j][1]) + (v[i][1]*v[j][0]);
            maxi=max(maxi, prod);
        }
    }

    cout<<maxi<<'\n';
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}