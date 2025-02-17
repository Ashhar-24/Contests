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

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int cnt=0;

    for(int i=0; i<n; i++){
        if(s[i]==s[i+1]){
            cnt++;
            i++;
        }
    }
    cout<< n- cnt;
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