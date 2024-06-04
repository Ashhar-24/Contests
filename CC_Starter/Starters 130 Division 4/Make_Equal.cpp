#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n; i++) cin>>v[i];

    if(n==1){
        cout<<"YES"<<'\n';
        return;
    }
    if(v[0]==v[n-1]){
        int a= v[0];
        bool small=0;
        for(int i=1; i<n-1; i++){
            if(v[i]<a){
                small=1;
                break;
            }
        }

        if(small!=1){
            cout<<"YES"<<'\n';
            return;
        }
    }
    cout<<"NO"<<'\n';
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}