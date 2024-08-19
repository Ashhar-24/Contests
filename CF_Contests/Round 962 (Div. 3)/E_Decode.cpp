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

int MOD= 1e9+7;

void solve(){
    string s; cin>>s;
    int n= s.size();
    s=" "+s;    // adding an extra space/length to the string to avoid indexing mistake

    vector<int>pref(n+1,0);         // calculate the prefix sum by taking '0' as -1 and '1' as 1
    for(int i=1; i<=n; i++){
        pref[i]=(s[i]== '1' ? 1 : -1) + pref[i-1];
    }

    map<int,int>cnt;        // will store the sum of indices where a particular prefix sum occured towards left
    int ans=0;

    for(int i=0; i<=n; i++){
        int rightrange= n-i+1;              // right range for which the current i would be y in [x,y] which would've equal no of 0's and 1's
        int leftrange= cnt[pref[i]];        // left range would be that index where last pref[i] was found
        ans=(ans+ (leftrange*rightrange))%MOD;

        cnt[pref[i]] = (cnt[pref[i]] + (i+1))%MOD;      // updating the current pref[i]'s cnt in map by (i+1), as in [x,y] pref[x-1]==pref[y], ie left range would be x, so here x-1== i
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

// upsolve