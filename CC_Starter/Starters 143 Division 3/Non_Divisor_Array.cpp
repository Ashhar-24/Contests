#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define fore(i,a,b) for(int i = a; i < b; i++)
#define revfore(i,a,b) for(int i = a; i >= b; i--)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define INF 1e18
using namespace std;

bool isprime(int n){
    if(n==1)return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0)return false;
    }
    return true;
}

// O(n log log n)
vector<bool> seive(int n){
    vector<bool>prime(n+1, 1);
    prime[0]=prime[1]=0;
    for(int i=2; i<=n; i++){
        if(prime[i]){
            
        }
    }
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

    // vector<int>prime;
    // vector<int>nonprime;
    // fore(i,2,n+1){
    //     if(isprime(i))prime.pb(i);
    //     else nonprime.pb(i);
    // }

    // int maxval= log2(n) + 1;
    // cout<<maxval<<'\n';

    // vector<int>ans(n+1,0);
    // for(auto x:prime){
    //     ans[x]=1;
    // }
    // ans[1]=2;


}	


signed main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}