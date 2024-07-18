#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define fore(i,a,b) for(int i = a; i < b; i++)
using namespace std;

bool isprime(int n){
    if(n==1)return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0)return false;
    }
    return true;
}

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    
    vector<int>v;
    v.pb(s[0]-'0');

    // replace all continuos 0s with single 0
    int i=1;
    while(i<n){
        if(s[i]=='0' && s[i-1]=='0'){
            i++;
            continue;
        }
        v.pb(s[i]-'0');
        i++;
    }

    // for(auto x:v) cout<<x<<" ";
    // cout<<'\n';

    int cnt0=0, cnt1=0;
    for(auto x:v){
        if(x==0)cnt0++;
        else cnt1++;
    }
    if(cnt0>=cnt1)cout<<"No\n";
    else cout<<"Yes\n";
}	


signed main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}