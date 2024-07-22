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
    int n,k; cin>>n>>k;
    string s; cin>>s;

    sort(s.begin(), s.end());

    int ans=0;
    bool flag, ok;

    while(true){
        ok=true;            // to check if there is no palindrome in given string 
        for(int i=0; i<=n-k; i++){
            flag=true;      // to check whether a substring is palindrome or not (1-> Yes, 0-> No)
            for(int j=0; j<k; j++){
                if(s[i+j]!=s[i+k-1-j]) flag=false;
            }
            if(flag) ok=false;      // 'ok==False' denotes that there is atleast 1 palindromic substring
        }
        if(ok) ans++;
        if(!next_permutation(s.begin(), s.end())) break;    // next_permutation results false, if no next lexographically string can be made
    }

    cout<<ans;
}



signed main() {
    int t=1; 
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

// upsolved