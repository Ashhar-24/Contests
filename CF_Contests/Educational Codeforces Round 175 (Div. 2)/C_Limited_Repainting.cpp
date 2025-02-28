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
#define mod 1e9+7
#define debug(x) cout<<x<<endl 
// int expo(int a, int b) {int res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}		// (a^b)%m
// bool isprime(int n){ if(n==1)return false; for(int i=2; i<=sqrt(n); i++){ if(n%i==0)return false;} return true;}
// vector<int> convertbinary64(int n){ vector<int> v(64,0); int i=0; while(n>0){ v[i]=n%2; n/=2; i++;} return v;}   // this represents the binary form in reverse manner
// int convertdecimal(vector<int> v){int ans=0; for(int i=0; i<64; i++){ ans+=v[i]*pow(2,i);}return ans;}

bool check(vector<int>& v, string& s, int maxi, int k){
    int n = s.size();
    int cnt = 0, i = -1;
    fore(j,0,n){
        if(v[j]<=maxi)continue;
        else if(s[j]=='R'){
            if(i!=-1){
                cnt++; i = -1;
            }
        }
        else if(s[j]=='B'){
            if(i==-1)i=j;
        }
    }
    if(i!=-1)cnt++;
    return cnt<=k;
}

void solve(){
    int n,k; cin>>n>>k;
    string s; cin>>s;
    vector<int>v(n);
    fore(i,0,n)cin>>v[i];

    int low = 0, high = 1e9;

    // int ans;
    while(low<=high){
        int mid = low + ((high-low)/2);
        if(check(v,s,mid,k)){
            // ans = mid; 
            high = mid - 1;
        }
        else low = mid + 1;
    }
    cout<<low<<endl;
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