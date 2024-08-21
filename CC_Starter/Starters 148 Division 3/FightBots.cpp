#include <bits/stdc++.h>
using namespace std;
// #define int long long int
#define pb push_back
#define fore(i,a,b) for(int i = a; i < b; i++)
#define revfore(i,a,b) for(int i = a; i >= b; i--)
#define all(v) v.begin(), v.end()
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define endl '\n'
#define INF 1e18
int expo(int a, int b, int mod) {int res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}		// (a^b)%m
bool isprime(int n){ if(n==1)return false; for(int i=2; i<=sqrt(n); i++){ if(n%i==0)return false;} return true;}
vector<int> convertbinary64(int n){ vector<int> v(64,0); int i=0; while(n>0){ v[i]=n%2; n/=2; i++;} return v;}   // this represents the binary form in reverse manner
int convertdecimal(vector<int> v){int ans=0; for(int i=0; i<64; i++){ ans+=v[i]*pow(2,i);}return ans;}

void solve(){
    int n,x,y; cin>>n>>x>>y;
    string s; cin>>s;
    s=" "+s;

    vector<int> x_vec(n+1,0);
    vector<int> y_vec(n+1,0);

    for(int i=1; i<=n; i++){
        if(s[i]=='R'){
            y_vec[i] = y_vec[i-1];
            x_vec[i] = x_vec[i-1] + 1;
        }
        else if(s[i]=='L'){
            y_vec[i] = y_vec[i-1];
            x_vec[i] = x_vec[i-1] - 1;
}
        else if(s[i]=='U'){
            y_vec[i] = y_vec[i-1]+1;
            x_vec[i] = x_vec[i-1];
        }
        else if(s[i]=='D'){
            y_vec[i] = y_vec[i-1]-1;
            x_vec[i] = x_vec[i-1];
        }
    }

    for(int i=1; i<=n; i++){
        int diffx= abs(x-x_vec[i]);
        int diffy= abs(y- y_vec[i]);
        if(diffx+diffy==i){
            yes; return;
        }
    }
    no;
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