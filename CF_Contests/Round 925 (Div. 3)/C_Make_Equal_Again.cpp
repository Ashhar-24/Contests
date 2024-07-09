#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(auto &x: v){
        cin>>x;
    }

    int ans;
    int pre=1, suff=1;

    for(int i=1; i<n; i++){
        if(v[i]==v[0])pre++;
        else break;
    }

    for(int i=n-2; i>=0; i--){
        if(v[i]==v[n-1])suff++;
        else break;
    }

    if(v[0]!=v[n-1]) ans= n- max(pre,suff);
    else if(v[0]==v[n-1]) ans= max(0, n- (pre+suff));       // maxing it with 0, cuz' if all the elements are equal, it would be -n

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
// upsolved