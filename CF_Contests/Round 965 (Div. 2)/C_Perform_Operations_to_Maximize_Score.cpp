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

void solve(){
    int n,k; cin>>n>>k; 
    vector<pair<int,int>>v(n);
    fore(i,0,n)cin>>v[i].first;
    fore(i,0,n)cin>>v[i].second;

    sort(all(v));

    // we divide the entire question into 2 cases:
    // Case1: We find the max median possible using binary seacrh and taking a[i] as the last element of sorted array
    // Case2: We make the max element which can be increased by k

    // Case 1:

    int lo= 0, hi= 2e9, ans=v[n-1].first;       // if median=0, ans=v[n-1]
    while(lo<=hi){
        int mid = (lo+hi)/2;
        int req= 1 + (n-1)/2+1;            // by observation, 'req' tells that for a no to be median it should have atleast 'req' no elements greater or equal to it
        int rem=k;


        for(int i=n-1; i>=0; i--){
            if(v[i].first>=mid)req--;
            else{
                if(v[i].second==1){
                    if(mid-v[i].first <= rem){
                        rem-=mid-v[i].first;
                        req--;
                    }
                }
            }
        }

        if(req<=0){                     // req<0 means there are more than req elements to right of median
            ans=max(ans, v[n-1].first+mid);
            lo=mid+1;
        }
        else hi=mid-1;
    }

    // Case 2: Now we look for that largest element which can be max by adding k
    for(int i=n-1; i>=0; i--){
        if(v[i].second==1){
            if(i>=n/2){
                ans=max(ans,v[i].first + k +v[n/2 -1].first);
            }
            else{
                ans=max(ans, v[i].first+ k + v[n/2].first);
            }
        }
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