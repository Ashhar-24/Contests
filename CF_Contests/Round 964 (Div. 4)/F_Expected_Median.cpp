#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define fore(i,a,b) for(int i = a; i < b; i++)
#define revfore(i,a,b) for(int i = a; i >= b; i--)
#define all(v) sort(v.begin(), v.end())
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define endl '\n'
#define INF 1e18
int expo(int a, int b, int mod) {int res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}		// (a^b)%m

// bool isprime(int n){
//    if(n==1)return false;
//    for(int i=2; i<=sqrt(n); i++){
//        if(n%i==0)return false;
//    }
//    return true;
//}
// vector<int> convertbinary64(int n){
//    vector<int> v(64,0);
//    int i=0;
//    while(n>0){
//        v[i]=n%2;
//        n/=2;
//        i++;
//    }
//    return v;       // this represents the binary form in reverse manner
//}

// int convertdecimal(vector<int> v){
//    int ans=0;
//    for(int i=0; i<64; i++){
//        ans+=v[i]*pow(2,i);
//    }
//    return ans;
//}

int N= 1e6;
int M= 1e9+7;
vector<int>fact(N+10,1);

int powm(int x, int n)
{
    x %= M;
    if (n == 0)
        return 1;
    else if (n == 1)
        return x;
    int p = powm(x * x, n / 2);
    if (n % 2)
        return p * x % M;
    else
        return p;
}

int mod_div(int p, int q) { return p % M * powm(q, M - 2) % M; }

int ncr(int n,int r){
    if(r>n) return 0;
    return mod_div(fact[n], fact[n - r] * fact[r]);
}

void solve(){
    int n,k; cin>>n>>k;
    vector<int>v(n);

    int cnt1=0;
    fore(i,0,n){
        cin>>v[i];
        if(v[i]==1)cnt1++;
    }
    int cnt0=n-cnt1;

    int req= ceil(k/2.0);
    if(cnt1<req){
        cout<<0<<'\n'; return;
    }

    int ans=0;
    for(int i=req; i<=min(k, cnt1); i++){
        ans= (ans+(ncr(cnt1,i)*ncr(cnt0, k-i))%M)%M;
    }

    cout<<ans<<'\n';
}	


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=1; i<=N; i++){
        fact[i] = (fact[i-1]*i)%M;
    }

    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

// upsolve