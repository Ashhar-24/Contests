#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define fore(i,a,b) for(int i = a; i < b; i++)
#define revfore(i,a,b) for(int i = a; i >= b; i--)
using namespace std;

bool isprime(int n){
    if(n==1)return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0)return false;
    }
    return true;
}
vector<int> convertbinary64(int n){
    vector<int> v(64,0);
    int i=0;
    while(n>0){
        v[i]=n%2;
        n/=2;
        i++;
    }
    return v;       // this represents the binary form in reverse manner
}

int convertdecimal(vector<int> v){
    int ans=0;
    for(int i=0; i<64; i++){
        ans+=v[i]*pow(2,i);
    }
    return ans;
}

void solve(){
    int n; cin>>n;
    string s,t; cin>>s>>t;

    // if(s[0]==0 and t[0]==1) cout<<"NO\n";
    // else{
        int fo=0;
        fore(i,0,n){
            if(s[i]=='1'){
                fo=1;
            }
            if(s[i]!=t[i] and !fo){
                cout<<"NO\n";
                return;
            }
        }
        cout<<"YES\n";
    // }
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