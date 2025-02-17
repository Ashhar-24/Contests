#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define fore(i, a, b) for (int i = a; i < b; i++)
#define revfore(i, a, b) for (int i = a; i >= b; i--)
#define all(v) v.begin(), v.end()
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl '\n'
#define INF 1e18
#define debug(x) cout << x << endl
// int expo(int a, int b, int mod) {int res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}		// (a^b)%m
// bool isprime(int n){ if(n==1)return false; for(int i=2; i<=sqrt(n); i++){ if(n%i==0)return false;} return true;}
// vector<int> convertbinary64(int n){ vector<int> v(64,0); int i=0; while(n>0){ v[i]=n%2; n/=2; i++;} return v;}   // this represents the binary form in reverse manner
// int convertdecimal(vector<int> v){int ans=0; for(int i=0; i<64; i++){ ans+=v[i]*pow(2,i);}return ans;}

void solve()
{
    int n; cin >> n;
    vector<int>a(n),b(n), diff(n);

    fore(i,0,n)cin>>a[i];

    int more =0, less=0;

    fore(i,0,n){
        cin>>b[i];
        diff[i] = b[i]-a[i];
        if(diff[i]>0) more+=diff[i];
        else less += diff[i];
    }

    bool ok = 1;
    
    fore(i,0,n){
        if(diff[i]>0){
            if(a[i]- more + 2*diff[i] < b[i])ok&=0;
            else if(a[i]>=b[i])ok&=1;
        }
        else{
            if(a[i]-more < b[i]) ok&=0;
            else if(a[i]>=b[i])ok&=1;
        }
    }
    
    if(ok)yes;
    else no;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}