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
    int n,k; cin>>n>>k;
    vector<int>v(n);
    fore(i,0,n)cin>>v[i];
    sort(all(v));

    int l=v.back(), r= l+k-1;
    // l-> Min time at which lights will be turned ON, which were initially OFF at v.back()
    // r-> Max time till which lights will be ON, which were initially ON at v.back()

    // Comparing these both (l,r) will tell us whether it's possible to have all lights ON in the range [a[n-1], a[n-1]+k-1] or not
    
    for(int i=0; i<n-1; i++){
        int si=v.back(), ei=si+k, ans;
        
        // checking if the current light is ON/OFF at v.back()
        if(((v.back()-v[i])/k) & 1){    // True, if it is OFF at v.back()
                                    // therefore finding the min time at which it is ON using BS
            while(si<=ei){
                int mid= (si+ei)/2;
                if(((mid-v[i])/k) & 1){         // checking if it is ON/OFF at mid
                    si=mid+1;
                }
                else{
                    ans=mid;
                    ei=mid-1;
                }
            }
            l=max(l, ans);          // updating the l, as now it will be max of (l,ans) as the current light was off at previous l
        }
        else{                       // The current light is ON at v.back()
                                // therefore finding the max time till which it will be ON, because we need to limit our interval till this point, in order to have all the lights ON
            while(si<=ei){
                int mid= (si+ei)/2;
                if(((mid-v[i])/k) & 1){
                    ei=mid-1;
                }
                else{
                    ans=mid;
                    si=mid+1;
                }
            }
            r=min(r,ans);
        }
    }
    if(l>r)cout<<-1<<endl;
    else cout<<l<<endl;
}	


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

// upsolve