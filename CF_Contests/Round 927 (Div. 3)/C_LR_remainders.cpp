#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n, m; cin>>n>>m;
        vector <int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        vector <char> c(n);
        for(int i=0; i<n; i++) cin>>c[i];


        vector <int> ans;
        int j=0;
        while(v.empty()!=1){
            long long prod=1;
            for(int i=0; i<v.size(); i++){
                prod*=v[i];
            }
            int val = prod % m;
            // cout<<val<<'\n';
            ans.push_back(val);
            if(c[j++]=='L') v.erase(v.begin());
            else v.pop_back();
        }

        for(int i=0; i<n; i++) cout<<ans[i]<<" ";

        cout<<'\n';
    }
}