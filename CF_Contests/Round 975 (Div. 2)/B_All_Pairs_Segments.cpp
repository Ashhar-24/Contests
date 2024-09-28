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
    int n,q; cin>>n>>q;
    vector<int>v(n);
    fore(i,0,n)cin>>v[i];

    unordered_map<int,int>mp;
    // key-> No of segments
    // value -> No of points

    for(int i=0; i<n; i++){
        if(i==n-1)mp[i]++;      // when we reach last element, all the points on left will have a segment, 
                                // so i will be those no of segments and doing '++' to show there is one such point with those no of segments
        else{
            int curr_segs= (n-i-1) + (i*(n-i));         // these are the no of segments that the current element is present in
            mp[curr_segs]++;            
            int left_integers= v[i+1]-v[i]-1;       // no of integers left between two points as for these points, the segments can't be drawn using them
            int segs_of_leftintegers = (i+1)*(n-i-1);
            mp[segs_of_leftintegers]+= left_integers;
        }
    }

    while(q--){
        int k;
        cin>>k;
        cout<<mp[k]<<" ";
    }
    cout<<endl;

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