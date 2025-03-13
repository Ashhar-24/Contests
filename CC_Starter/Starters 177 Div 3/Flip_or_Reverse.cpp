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
    string a,b; cin>>a>>b;

    vector<int>diff;
    fore(i,0,n){
        if(a[i] != b[i]){
            diff.pb(i+1);
        }
    }
    if(diff.size()==0){
        cout<<0<<endl; return;
    }

    vector<pair<int,int>> ind;
    int i = 1, l = diff[0], r = l;
    while(i<diff.size()){
        if(diff[i]-diff[i-1]==1) r = diff[i];
        else{
            ind.pb({l,r});
            l = diff[i];
            r = l;
        }
        i++;
    }
    ind.pb({l,r});

    cout<<ind.size()<<endl;
    for(auto& it: ind) cout<<1<<" "<<it.first<<" "<<it.second<<endl;
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