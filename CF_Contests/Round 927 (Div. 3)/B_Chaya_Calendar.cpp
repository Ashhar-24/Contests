#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector <int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];

        int ans= v[0];
        for(int i=1; i<n; i++){
            ans++;
            if(v[i]<ans){
                int mul= v[i],j=1;
                while(ans>mul){
                    j++;
                    mul= v[i]*j;
                }
                ans=mul;
            }
            else{
                ans=v[i];
            }
        }

        cout<<ans<<'\n';
    }
}