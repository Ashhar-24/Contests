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

struct point{
    int x,y;
};

void solve(){
    int k; cin>>k;
    if(k==0){
        cout<<0<<endl; return;
    }

    vector<int>v;
    while(k>0){
        int s = 0;
        for(int i=500; i>=2; i--){
            int tri = i*(i-1)/2;
            if(tri<=k){
                s = i; break;
            }
        }
        if(s<2)s=2;
        v.pb(s);
        k -= s* (s-1)/2;
    }
    int n=0;
    for(int x: v) n+=x;

    vector<point>pts;

    int currx=0, curry=0;
    for(int i=0; i<v.size(); i++){
        int temp = v[i];
        int y= i;
        for(int j=0; j<temp; j++){
            pts.pb({currx, y});
            currx++;
        }
        curry++;
    }
    cout<<pts.size()<<endl;
    for(auto& p: pts)cout<<p.x<<" "<<p.y<<endl;
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