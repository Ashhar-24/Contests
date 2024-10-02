#include <bits/stdc++.h>
using namespace std;
#define int long long int

// #define pb push_back
// #define fore(i,a,b) for(int i = a; i < b; i++)
// #define revfore(i,a,b) for(int i = a; i >= b; i--)
// #define all(v) v.begin(), v.end()
// #define yes cout<<"YES\n"
// #define no cout<<"NO\n"
// #define endl '\n'
// #define INF 1e18
// #define debug(x) cout<<x<<endl 
// int expo(int a, int b, int mod) {int res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}		// (a^b)%m
// bool isprime(int n){ if(n==1)return false; for(int i=2; i<=sqrt(n); i++){ if(n%i==0)return false;} return true;}
// vector<int> convertbinary64(int n){ vector<int> v(64,0); int i=0; while(n>0){ v[i]=n%2; n/=2; i++;} return v;}   // this represents the binary form in reverse manner
// int convertdecimal(vector<int> v){int ans=0; for(int i=0; i<64; i++){ ans+=v[i]*pow(2,i);}return ans;}

void solve(){
    int  b,c,d; cin>>b>>c>>d;
    int a=0;

    map<tuple<int,int,int>, int>mp;             // mp[{b, c, d}] = a, on solving from the given equation
    mp[{0, 0, 0}] = 0;
    mp[{0, 0, 1}] = 1;
    mp[{0, 1, 0}] = 0;
    mp[{0, 1, 1}] = -1;         // no value of a is possible
    mp[{1, 0, 0}] = -1;
    mp[{1, 0, 1}] = 1;          // a can be both 0/1.
    mp[{1, 1, 0}] = 1;
    mp[{1, 1, 1}] = 0;

    for(int i = 60; i >= 0; i--) {
        int I = (((1LL << i) & b) != 0);    // checking for set bit by moving 1 by 'i' bits left
        int J = (((1LL << i) & c) != 0); 
        int K = (((1LL << i) & d) != 0); 
        int X = mp[{I, J, K}];
            
        if(X == -1) {
            a = -1; 
            break;
        }
        else a += X * (1LL << i);
    }
 
    cout << a << "\n";
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

// upsolve