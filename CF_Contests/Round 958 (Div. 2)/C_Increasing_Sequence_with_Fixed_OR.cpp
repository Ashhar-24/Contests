#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define fore(i,a,b) for(int i = a; i < b; i++)
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
    int n; cin>>n;

    vector<int>setbit = convertbinary64(n);

    vector<int> ans; ans.pb(n);

    for(int i=0; i<64; i++){
        if(setbit[i]==1){
            vector<int> temp = convertbinary64(n);
            temp[i]=0;
            int num = convertdecimal(temp);
            if(num>0) ans.pb(num);
        }
    }

    cout<<ans.size()<<'\n';
    for(int i=ans.size()-1; i>=0; i--)cout<<ans[i]<<" ";
    cout<<'\n';
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