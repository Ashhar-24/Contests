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
#define debug(x) cout<<x<<" "
int expo(int a, int b, int mod) {int res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}		// (a^b)%m
bool isprime(int n){ if(n==1)return false; for(int i=2; i<=sqrt(n); i++){ if(n%i==0)return false;} return true;}
vector<int> convertbinary64(int n){ vector<int> v(64,0); int i=0; while(n>0){ v[i]=n%2; n/=2; i++;} return v;}   // this represents the binary form in reverse manner
int convertdecimal(vector<int> v){int ans=0; for(int i=0; i<64; i++){ ans+=v[i]*pow(2,i);}return ans;}

// declaring it globally, as we have to use it in func op(), so to avoid passing of arguments declaring it globally.
int N= 2e5+10;
vector<bool>ispresent(N);
vector<int>v(N);
int n;

void op(){
    int maxi=0;

    fore(i,0,n){
        ispresent[v[i]]=0;  // doing it explicitly, as in the second operation, we need to find the max element again
    }

    fore(i,0,n){
        if(ispresent[v[i]]){
            maxi=max(maxi, v[i]);
        }
        ispresent[v[i]]=1;
        v[i]=maxi;
        // debug(v[i]);
    }
}

void solve(){
    cin>>n;
    fore(i,0,n)cin>>v[i];

    int sum=0;
    fore(i,0,n)sum+=v[i];
    op();

    fore(i,0,n)sum+=v[i];
    op();


    // now in further operations, the array would appear to undergo a right shift, therefore any element at index i would contribute (n-i)*v[i] to the sum
    fore(i,0,n){
        sum+= (n-i)*v[i];
    }

    cout<<sum<<endl;

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