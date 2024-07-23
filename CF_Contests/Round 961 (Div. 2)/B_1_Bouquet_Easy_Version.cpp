#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define fore(i,a,b) for(int i = a; i < b; i++)
#define revfore(i,a,b) for(int i = a; i >= b; i--)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
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
    int n,m; cin>>n>>m;
    vector<int> v(n);
    fore(i,0,n) cin>>v[i];

    sort(v.begin(),v.end());

    int sum=0, ans=0;
    // applying sliding window technique with variable sized window such that the condition that all the elements in the subarray has difference <=1 and the sum of the subarray is maximum
    int i=0,j=0;
    while(j<n){
        sum+=v[j];
        while(v[j]-v[i]>1 || sum>m){
            sum-=v[i];
            i++;
        }
        if(v[j]-v[i]<=1){
            ans=max(ans, sum);
        }
        j++;
    }	
    cout<<ans<<'\n';
}

signed main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

// upsolve