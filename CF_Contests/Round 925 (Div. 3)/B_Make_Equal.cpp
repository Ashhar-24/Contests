#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(auto &x: v) cin>>x;

    int sum=0;
    for(int i=0; i<n; i++)sum+=v[i];

    int req = sum / n, check=1, extra=0;

    for(int i=0; i<n; i++){
        if(v[i]+extra < req) check=0;
        else{
            v[i]+=extra;
            extra = v[i]-req;
        }
    }

    if(check) cout<<"YES\n";
    else cout<<"NO\n";

}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

// upsolve :)