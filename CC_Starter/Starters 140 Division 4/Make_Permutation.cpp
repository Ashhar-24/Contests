#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> v(n);

    // map<int,int>mp;
    // int sum=0;
    for(int i=0; i<n; i++){
        cin>>v[i];
        // mp[v[i]]++;
        // sum+=v[i];
    } 
    bool ans=1;

    // if(sum==n*(n+1)/2 and mp.size()!=n) ans=0;
    // if(mp.rbegin()->second>1 and mp.rbegin()->first==n)ans=0;

    // if(n==1)cout<<"Yes"<<'\n';
    // else if(ans)cout<<"Yes"<<'\n';
    // else cout<<"No"<<'\n';
    

    sort(v.begin(),v.end());
    for(int i=0; i<n; i++){
        if((i+1)-v[i]<0){
            ans=0; break;
        }
    }

    if(ans)cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';

}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}