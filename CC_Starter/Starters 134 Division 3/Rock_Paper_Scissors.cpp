#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    vector<char> v(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
    }

//    int ans=0;
//    int l=0, r;
//    while(l<n){
//        int ct=0;
//        r=l;
//        while(r<n and v[r]==v[l]){
//            ct++;
//            r++;
//        }
//        ans+=ceil(ct/2.0);
       
//        l=r;
//    }
   
//    cout<<ans<<'\n';  

    int ct=0;
    for(int i=0; i<n-1; i++){
        if(v[i]==v[i+1]){
            ct++;
            i++;
        }
    }

    cout<<n-ct<<'\n';
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

//upsolve