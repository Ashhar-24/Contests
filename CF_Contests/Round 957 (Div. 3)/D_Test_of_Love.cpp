#include <bits/stdc++.h>
#define int long long int
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
    int n, m, k; cin >> n >> m >> k;
    string s; cin >> s;
    int wat=0, jump=0, ans=1;
    fore(i,0,n){
        if(s[i]=='L')jump=0;
        else{
            jump++;
            if(jump>=m){
                if(s[i]=='W')wat++;
                else ans=0;
            }
        }
    }
    if(!ans or wat>k) cout<<"NO\n";
    else cout<<"YES\n";
}	


signed main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

// upsolve