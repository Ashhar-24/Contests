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
// int expo(int a, int b, int mod) {int res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}		// (a^b)%m
// bool isprime(int n){ if(n==1)return false; for(int i=2; i<=sqrt(n); i++){ if(n%i==0)return false;} return true;}
// vector<int> convertbinary64(int n){ vector<int> v(64,0); int i=0; while(n>0){ v[i]=n%2; n/=2; i++;} return v;}   // this represents the binary form in reverse manner
// int convertdecimal(vector<int> v){int ans=0; for(int i=0; i<64; i++){ ans+=v[i]*pow(2,i);}return ans;}

void solve(){
    string a,b; cin>>a>>b;
    int n = a.size(), m = b.size();
    vector<int> vis (n,0);
    // vector<int> vis (m);

    int i = n - 1, j = m - 1;

    while(i>=0 && j>=0){
        if(a[i]==b[j]){
            vis[i]=1;
            j--;
        }
        i--;
    }
    // while(i>=0 && j>=0){
    //     if(a[i]==b[j]){
    //         vis[j] = i+1;
    //         j--;
    //     }
    //     i--;
    // }

    if(j!= -1){
        cout<<-1<<endl;
        return;
    }

    int cnt = 1, ans=0;

    fore(i,0,n){
        if(vis[i])cnt++;
        else ans += cnt;
    }

    // int ans = 0, ind =1;

    // fore(i,0,m){
    //     if(i==0){
    //         ans += (vis[i]-1)*ind;
    //         // ind++;
    //     }
    //     else{
    //         ans += (vis[i]-vis[i-1]-1)*ind;
    //     }
    //     ind++;
    // }
    // if(vis[m-1]!=n){
    //     ans += (n-vis[m-1])*ind;
    // }

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