#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define fore(i,a,b) for(int i = a; i < b; i++)
#define revfore(i,a,b) for(int i = a; i >= b; i--)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define INF 1e18
using namespace std;

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
int check(int mid, vector<int>&v){
    int sum=0;
    fore(i,0,v.size())sum+= min(mid, v[i]);
    return sum;
}

void solve(){
    int n,m; cin>>n>>m;
    vector<int>v(n);
    fore(i,0,n)cin>>v[i];

    int sum=0;
    fore(i,0,n)sum+=v[i];
    if(sum<=m)cout<<"infinite"<<'\n';
    // else cout<<m/n;
    else{
        int x=0;
        int l=0, r= 2e9;
        while(l<=r){
            int mid= (l+r)/2;
            if(check(mid,v)<=m){
                l=mid+1;
                x=mid;
            }
            else r=mid-1;
        }
        cout<<x;
    }
}	


signed main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1; 
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

// upsolve