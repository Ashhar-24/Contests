#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    sort(v.begin(), v.end());
    
    int ans= INT_MIN;

    int x=0, index=1;
    for(int i=n-1; i>=0; i--){
        x=v[i];
        int temp= x*index;
        ans=max(ans,temp);
        index++;
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

// Question was simple just needed bit of observation.
/*
    Using observation, after sorting it can be seen that if we take all the subarrays and then see the min weight 
    each sub array can carry and then 
*/