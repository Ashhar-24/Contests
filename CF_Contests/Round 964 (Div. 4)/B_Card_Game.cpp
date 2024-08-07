#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define fore(i,a,b) for(int i = a; i < b; i++)
#define revfore(i,a,b) for(int i = a; i >= b; i--)
#define all(v) sort(v.begin(), v.end())
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
    int a1,a2,b1,b2; cin>>a1>>a2>>b1>>b2;
    int cnt1=0, cnt2=0, ans=0;

    // R1
    if(a1>b1)cnt1++;
    else if(a1<b1)cnt2++;
    if(a2>b2)cnt1++;
    else if(a2<b2) cnt2++;
    if(cnt1>cnt2)ans++;

    cnt1=0, cnt2=0;
    // R2
    if(a1>b2)cnt1++;
    else if(a1<b2) cnt2++;
    if(a2>b1)cnt1++;
    else if(a2<b1) cnt2++;
    if(cnt1>cnt2)ans++;

    cnt1=0, cnt2=0;
    //R3
    if(a2>b1)cnt1++;
    else if(a2<b1) cnt2++;
    if(a1>b2)cnt1++;
    else if(a1<b2)cnt2++;
    if(cnt1>cnt2)ans++;

    // R4
    cnt1=0, cnt2=0;
    if(a2>b2)cnt1++;
    else if(a2<b2) cnt2++;
    if(a1>b1)cnt1++;
    else if(a1<b1) cnt2++;
    if(cnt1>cnt2)ans++;

    cout<<ans<<'\n';
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