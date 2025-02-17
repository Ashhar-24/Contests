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
#define debug(x) cout<<x<<endl 
int expo(int a, int b, int mod) {int res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}		// (a^b)%m
bool isprime(int n){ if(n==1)return false; for(int i=2; i<=sqrt(n); i++){ if(n%i==0)return false;} return true;}
vector<int> convertbinary64(int n){ vector<int> v(64,0); int i=0; while(n>0){ v[i]=n%2; n/=2; i++;} return v;}   // this represents the binary form in reverse manner
int convertdecimal(vector<int> v){int ans=0; for(int i=0; i<64; i++){ ans+=v[i]*pow(2,i);}return ans;}

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    fore(i,0,n)cin>>v[i];

    sort(all(v));
    int ans=INT_MAX;
    if(n==3){cout<<0<<endl;
    return;}

    // case 1:  first 2 elements delete
    ans=min(ans,v[n-1]-v[2]);
    // cout<<ans<<endl;

    // case 2: last 2 elements delete
    ans=min(ans, v[n-3]-v[0]);
    // cout<<ans<<endl;

    // case 3: 
    ans=min(ans, v[n-2]-v[1]);
    // cout<<ans<<endl;

    // case 4:
    ans=min(ans, v[n-1]-v[1]);
    // cout<<ans<<endl;

    // case 5:
    ans=min(ans, v[n-2]-v[0]);
    // cout<<ans<<endl;

    ans=min(ans, v[n-1]-v[0]);

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