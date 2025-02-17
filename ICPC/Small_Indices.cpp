#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define vpll vector<pll>
#define mii map<int, int>
#define mll map<ll,ll>
#define ump unordered_map
#define prq priority_queue
#define lb lower_bound
#define ub upper_bound
#define mc <char,int>
#define si set<int>
#define sc set<char>
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define acm accumulate
#define pb push_back
#define ff first
#define ss second
#define eb emplace_back
#define mod 100000007
using namespace std;
// int expo(int a, int b, int mod) {int res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}		// (a^b)%m
// bool isprime(int n){ if(n==1)return false; for(int i=2; i<=sqrt(n); i++){ if(n%i==0)return false;} return true;}
// vector<int> convertbinary64(int n){ vector<int> v(64,0); int i=0; while(n>0){ v[i]=n%2; n/=2; i++;} return v;}   // this represents the binary form in reverse manner
// int convertdecimal(vector<int> v){int ans=0; for(int i=0; i<64; i++){ ans+=v[i]*pow(2,i);}return ans;}

void solve(){
    int n; cin>>n;
    vector<int> a(n), b(n);
    for(int &x: a)cin>>x;
    for(int &x: b)cin>>x;

    int cnt = 0;
    for(int i=0; i<n; i++){
        int num = b[i];
        for(int j = i-1; j>=0; j--){
            
        }
    }

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