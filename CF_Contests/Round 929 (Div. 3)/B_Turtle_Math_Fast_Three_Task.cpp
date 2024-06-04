#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    ll sum=0;
    for(int i=0; i<n; i++) sum+=v[i];

    ll rem= sum%3;
    int moves=0;
    if(rem==0) cout<<moves<<'\n';
    else if(rem==2){
        moves=1; cout<<moves<<'\n';
    }
    else{
        int ans=INT_MAX;
        for(int i=0; i<n; i++){
            sum-=v[i];
            if(sum%3==0){
                moves=1;
                ans=min(ans,moves);
            }
            else if(sum%3==2){
                moves=2;
                ans=min(ans,moves);
            }
            sum+=v[i];
        }

        cout<<ans<<'\n';

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