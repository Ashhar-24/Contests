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
    vector<int>x(n), y(n);
    fore(i,0,n)cin>>x[i];
    fore(i,0,n)cin>>y[i];

    int p = y[0];
    int ind;
    fore(i,0,n){
        if(x[i]==p){
            ind = i; break;
        }
    }
    vector<pair<int,int>>temp;
    fore(i,0,n) temp.pb({abs(x[i]-p), x[i]});
    sort(all(temp));

    bool same = 1;
    fore(i,0,n){
        if(y[i]!=temp[i].second){
            same = 0;
            break;
        }
    }
    if(!same)cout<<-1<<endl;
    else cout<<ind+1<<endl;

    // fore(i,0,n){
    //     int p = x[i];
    //     vector<pair<int,int>> dist;
    //     fore(j,0,n){
    //         dist.pb({abs(p-x[j]), x[j]});
    //     }
    //     sort(all(dist));
    //     bool is = 1;
    //     fore(k,0,n){
    //         if(dist[k].second!=y[k]){
    //             is = 0;break;
    //         }
    //     }
    //     if(is){
    //         cout<<i+1<<endl;
    //         return;
    //     }
    // }
    // cout<<-1<<endl;
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