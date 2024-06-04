#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    int ans=0;

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum=0;
            for(int k=i; k<=j; k++){
                sum+=v[k];
            }
            if(sum % 2 == 0){
                // cout<<sum<<" ";
                ans= max(ans, j-i+1);
            } 
        }
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