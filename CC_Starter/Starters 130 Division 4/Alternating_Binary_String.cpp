#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    if(n==1){
        cout<<0<<'\n';
        return;
    }
    if(n==2){
        if(s=="11" or s=="00"){
            cout<<1<<'\n';
            return;
        }
        else{
            cout<<0<<'\n';
            return;
        }
    }
    int count=0;
    for(int i=1; i<s.length(); i++){
        if(s[i]==s[i-1]) count++;
    }
    cout<<count<<'\n';
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}