#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
    } 
    
    bool ans=1;

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