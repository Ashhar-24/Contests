#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n,m; cin>>n>>m;
    vector<vector<int>>a(n)(m);
    vector<vector<int>>b(n)(m);

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cin>>a[i][j];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cin>>b[i][j];
    }

    bool check=0;
    if(n==1 || m==1)check=1;
    
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}