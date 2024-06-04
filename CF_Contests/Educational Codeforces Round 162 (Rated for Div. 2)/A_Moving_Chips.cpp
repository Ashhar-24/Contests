#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector <int> v(n);

    // int count1=0, count0=0, ans=INT_MIN;

    for(int i=0; i<n; i++){
        cin>>v[i];
    } 

    int i=0, ans=0;
    
    for(int i=0; i<n; i++){
        if(v[i]==1){
            int j=i+1;
            while(v[j]!=1 and j<n) j++;
            if(j==n){
                ans=0;
                break;
            }
            else ans+= j-i-2;
        }
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