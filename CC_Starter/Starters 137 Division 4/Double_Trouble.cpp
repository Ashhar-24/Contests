#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>arr(n);
    vector<int>p(n);
    for(auto &x: arr) cin>>x;
    for(auto &x: p) cin>>x;

    int ct=n, temp=0;
    for(int i=0; i<n-1, ct>0; i++){
        int diff= abs(arr[i]-arr[i+1]);
        if(p[i]>=diff){
            ct-=2;
            i+=1;
        }

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

// Upsovle