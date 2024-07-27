#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define fore(i,a,b) for(int i = a; i < b; i++)
#define revfore(i,a,b) for(int i = a; i >= b; i--)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define INF 1e18
using namespace std;

bool isprime(int n){
    if(n==1)return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0)return false;
    }
    return true;
}
vector<int> convertbinary64(int n){
    vector<int> v(64,0);
    int i=0;
    while(n>0){
        v[i]=n%2;
        n/=2;
        i++;
    }
    return v;       // this represents the binary form in reverse manner
}

int convertdecimal(vector<int> v){
    int ans=0;
    for(int i=0; i<64; i++){
        ans+=v[i]*pow(2,i);
    }
    return ans;
}

void solve(){
    int n, x, y; cin>>n>>x>>y;
    vector<int> a(n), b(n);
    fore(i,0,n)cin>>a[i];
    fore(i,0,n)cin>>b[i];

    vector<pair<int,int>> v;
    fore(i,0,n){
        v.pb({a[i],b[i]});
    }

    vector<pair<int,int>> temp1= v;
    vector<pair<int,int>> temp2= v;

    sort(temp1.begin(), temp1.end(), greater<>());

    int sum=0, cnt1=0, cnt2=0;
    for(auto p:temp1){
        if(sum<=x){
            sum+= p.first;
            cnt1++;
        }
    }

    sum=0;
    sort(temp2.begin(), temp2.end(), [](auto &a, auto &b) {
        return a.second > b.second;
    });
    
    for(auto p:temp2){
        if(sum<=y){
            sum+= p.second;
            cnt2++;
        }
    }

    cout<<min(cnt1, cnt2);

}	


signed main() {
    int t=1; 
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;
}