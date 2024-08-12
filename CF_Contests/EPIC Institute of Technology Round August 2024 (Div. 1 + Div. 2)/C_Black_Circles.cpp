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
    int arr [n][2];
    fore(i,0,n){
        cin>>arr[i][0]>>arr[i][1];
    }
    int xi,yi,xt,yt; cin>>xi>>yi>>xt>>yt;
    int comp= ((xt-xi)*(xt-xi)) + ((yt-yi)*(yt-yi));
    bool check=1;

    fore(i,0,n){
        int temp= ((xt-arr[i][0])*(xt-arr[i][0])) + ((yt-arr[i][1])*(yt-arr[i][1]));
        if(temp>comp)continue;
        else{
            check=0;
            break;
        }
    }
    if(check)yes;
    else no;
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