#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ans=0;

        if(k<= (4*n-2)/2){
            ans= ceil(k/2.0);
        }
        else if(k==(4*n)-2){
            ans= n*2;
        }
        else{
            ans= ceil(k/2.0);
        }
        
        cout<<ans<<'\n';
    }
}