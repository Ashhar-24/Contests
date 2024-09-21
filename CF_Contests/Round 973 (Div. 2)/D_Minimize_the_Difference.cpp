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
int expo(int a, int b, int mod) {int res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}		// (a^b)%m
bool isprime(int n){ if(n==1)return false; for(int i=2; i<=sqrt(n); i++){ if(n%i==0)return false;} return true;}
vector<int> convertbinary64(int n){ vector<int> v(64,0); int i=0; while(n>0){ v[i]=n%2; n/=2; i++;} return v;}   // this represents the binary form in reverse manner
int convertdecimal(vector<int> v){int ans=0; for(int i=0; i<64; i++){ ans+=v[i]*pow(2,i);}return ans;}

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    fore(i,0,n)cin>>v[i];

    /*
        Since we need to minimize the difference of max and min values, we would first minimize the max value and
        maximize the min value. In order to do so, we apply BS to find what min value the max value can reach and what 
        max value can min value reach.
    */
    int minmax=0;
    int maxmin=0;

    // minimize the maximum
    int l= -1e15, r=1e15;
    while(l<=r){
        int mid= (l+r)/2;
        vector<int>temp=v;
        for(int i=0; i<n-1; i++){
            if(temp[i]>mid){
                int extra= temp[i]-mid;
                temp[i+1]+=extra;
                temp[i]=mid;
            }
        }
        if(temp[n-1]<=mid){             // since we cannot reduce the v[n-1], so take it as a reference and we should lower our mid
            minmax=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }

    // maximize the minimum
    l=-1e15, r=1e15;
    while(l<=r){
        int mid=(l+r)/2;
        vector<int>temp=v;
        for(int i=n-1; i>0; i--){
            if(temp[i]<mid){
                int extra= mid-temp[i];
                temp[i-1]-=extra;
                temp[i]=mid;
            }
        }

        if(temp[0]>=mid){               // since we cannot increase the v[0], we take it as a reference that we can further increase the mid
            maxmin=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }

    cout<<max(0LL, minmax-maxmin)<<endl;


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