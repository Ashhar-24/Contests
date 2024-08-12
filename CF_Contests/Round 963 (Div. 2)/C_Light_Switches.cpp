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

    int mini=v.back(), maxi= mini+k-1;

    for(int i=0; i<n-1; i++){
        int si=v.back(), ei=si+k, ans;

        if(((v.back()-v[i])/k) & 1){    // these are all those lights which are initially OFF at v.back()
                                    // therefore finding the max time at which all are ON
            while(si<=ei){
                int mid= (si+ei)/2;
                if(((mid-v[i])/k) & 1){
                    si=mid+1;
                }
                else{
                    ans=mid;
                    ei=mid-1;
                }
            }
            mini=max(mini, ans);
        }
        else{                       // these are all those which are initially ON at v.back()
                                    // therefore finding the min time at which all are ON
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
            maxi=min(maxi,ans);
        }
    }
    if(mini>maxi)cout<<-1<<endl;
    else cout<<mini<<endl;
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