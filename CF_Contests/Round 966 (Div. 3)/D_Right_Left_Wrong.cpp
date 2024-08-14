#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define fore(i,a,b) for(int i = a; i < b; i++)
#define revfore(i,a,b) for(int i = a; i >= b; i--)
#define all(v) v.begin(), v.end()
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define endl '\n'
#define INF 1e18
int expo(int a, int b, int mod) {int res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}		// (a^b)%m
bool isprime(int n){ if(n==1)return false; for(int i=2; i<=sqrt(n); i++){ if(n%i==0)return false;} return true;}
vector<int> convertbinary64(int n){ vector<int> v(64,0); int i=0; while(n>0){ v[i]=n%2; n/=2; i++;} return v;}   // this represents the binary form in reverse manner
int convertdecimal(vector<int> v){int ans=0; for(int i=0; i<64; i++){ ans+=v[i]*pow(2,i);}return ans;}

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    vector<char>c(n);
    // vector<pair<int,char>>v;
    fore(i,0,n)cin>>v[i];
    fore(i,0,n)cin>>c[i];

    vector<int>pref(n+1, 0);
    // pref[1]=v[0];
    for(int i=1; i<=n; i++){
        pref[i]=v[i-1]+pref[i-1];
        // cout<<pref[i]<<" ";
    }
    // cout<<pref[n];

    int i=0, j=n-1;
    // cout<<pref[j+1]-pref[i];
    int ans=0;
    // cout<<pref[j]-pref[i];
    
    while(i<j){
        
        while(c[i]=='R' and i<n)i++;
        while(c[j]=='L' and j>=0)j--;

        if(i<j and i<n and j>=0) ans+= pref[j+1]-pref[i];
        i++; j--;

        // if(c[i]=='L' and c[j]=='R'){
        //     ans+= pref[j+1]-pref[i];
        //     i++; 
        //     j--;
        // }
        // else if(c[i]=='L' and c[j]=='L')j--;
        // else if(c[i]=='R' and c[j]=='R')i++;
        // else if(c[i]=='R' and c[j]=='L'){
        //     i++; 
        //     j--;
        // }
    }
    cout<<ans<<endl;
}	


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}