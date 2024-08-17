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
    vector<int>v(n);
    map<int,int>mp;
    fore(i,0,n){
        cin>>v[i];
        if(mp.find(v[i])==mp.end()){
            mp[v[i]]=i;     // storing the index of the first occurence of any no.
        }
    }

    int ans=0;
    for(int i=1; i<=50; i++){           // starting value
        if(mp.find(i)==mp.end())continue;
        int ind=mp[i];
        priority_queue<int, vector<int>, greater<int>>pq;       // will store the values between i and j in (min heap: smaller to larger values)
        int sum=0;
        for(int j=ind+1; j<n; j++){     // v[j]-> ending value
            if(pq.size()==(k-2)){
                ans=max(ans, i+v[j]+ sum);
            }
            // after considering v[j] as ending element we push it to pq, and take next no to the ending no.
            pq.push(v[j]);
            sum += 2*v[j];
            if(pq.size()>(k-2)){
                sum-= 2*(pq.top());     // removing the smallest no from pq, as we need to have larger elements btw i and j
                pq.pop();
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