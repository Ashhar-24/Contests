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

// bool isprime(int n){
//    if(n==1)return false;
//    for(int i=2; i<=sqrt(n); i++){
//        if(n%i==0)return false;
//    }
//    return true;
//}
// vector<int> convertbinary64(int n){
//    vector<int> v(64,0);
//    int i=0;
//    while(n>0){
//        v[i]=n%2;
//        n/=2;
//        i++;
//    }
//    return v;       // this represents the binary form in reverse manner
//}

// int convertdecimal(vector<int> v){
//    int ans=0;
//    for(int i=0; i<64; i++){
//        ans+=v[i]*pow(2,i);
//    }
//    return ans;
//}

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)cin>>v[i];

    // vector<int>pref(n,0), suffix(n,0);
    // pref[0]=v[0];
    // for(int i=1; i<n ; i++){
    //     pref[i]=pref[i-1]+v[i];
    // }
    
    // suffix[0]=v[n-1];
    // for(int i=1; i<n; i++){
    //     suffix[i]=v[n-1-i]+suffix[i-1];
    // }
    // reverse(all(suffix));

    // // for(int x:pref)cout<<x<<" ";
    // // cout<<endl;
    // // for(int x:suffix)cout<<x<<" ";


    // int cnt=0;
    // for(int i=0; i<n; i++){
    //     // if((i==0 and v[i]==0) or(i==n-1 and v[i]==0))continue;
    //     if(v[i]==0){
    //         if((pref[i]-suffix[i])==0)cnt+=2;
    //         else if(abs(suffix[i]-pref[i])==1)cnt++;
    //         // else if(pref[i]<suffix[i])cnt++;
    //     }
    // }

    // cout<<cnt<<'\n';

    // Alter: With SC:O(1)
    int leftsum=0, sum=0, cnt=0;
    for(int i:v)sum+=i;
    for(int i=0; i<n; i++){
        leftsum+=v[i];
        
        if(v[i]==0){
            int rightsum= sum-leftsum;
            if(leftsum==rightsum)cnt+=2;
            else if(abs(leftsum-rightsum)==1)cnt++;
        }
        
    }
    cout<<cnt<<endl;

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