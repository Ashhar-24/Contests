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

void solve(){
    int n; cin>>n;
    string s1,s2,s3; cin>>s1>>s2>>s3;

    int z1 = count(all(s1), '0');
    int z2 = count(all(s2), '0');
    int z3 = count(all(s3), '0');

    int totz = z1+z2+z3;
    if(totz % n != 0){
        cout<<-1<<endl; return;
    }

    int k =  totz/n;
    if(k<0 || k>3){
        cout<<-1<<endl; return;
    }
    
    int ans = INT_MAX;
    for(int i=0; i< (1<<3); i++){
        if (__builtin_popcount(i) != k) continue;
        int less = 0, extra = 0;

        if(i&1){
            less += (n-z1);
        }
        else{
            extra += z1;
        }

        if(i&2){
            less += (n-z2);
        }
        else{
            extra += z2;
        }
        if(i&4){
            less += (n-z3);
        }
        else{
            extra += z3;
        }
        if(less==extra){
            ans = min(ans, less);
        }
    }

    cout<< (ans==INT_MAX ? -1 : ans)<<endl;
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