#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n,f,k; cin>>n>>f>>k;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    int fav=v[f-1];
    sort(v.begin(), v.end(), greater<int>());

    // if(v[k-1]>fav)cout<<"NO"<<'\n';
    // else{
    //     bool pr=0;
    //     for(int i=k; i<n; i++){
    //         if(v[i]==fav)pr=1;
    //     }
    //     if(pr==1)cout<<"MAYBE"<<'\n';
    //     else cout<<"YES"<<'\n';
    // } => Got hacked

    if(k==n || v[k]<fav) cout<<"YES"<<'\n';
    else if(v[k-1]==fav and v[k]==fav) cout<<"MAYBE"<<'\n';
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

// Upsolve