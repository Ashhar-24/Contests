#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector <char> v(n);
        for(int i=0; i<n; i++) cin>>v[i];

        int count=0;
        for(int i=1; i<n; i++){
            if(v[i]=='*' and v[i-1]=='*') break;
            if(v[i]=='@') count++;
        }

        cout<<count<<'\n';
    }
}