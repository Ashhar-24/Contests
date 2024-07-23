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
    int n,k; cin>>n>>k;
    int cnt=0;
    if(k==0){
        cout<<0<<'\n'; return ;
    }
    if(n>=k){
        cout<<1<<'\n'; return ;
    }
    else{
        k-=n;
        cnt++;
        n--;
        while(k>0){
            // cnt++;
            if(k>n and k<= (2*n)){
                cnt+=2;
                break;
            }
            else if(k>(2*n)){
                cnt+=2;
                k-=(2*n);
                n--;
            }
            else if(k<=n){
                cnt++;
                break;
            }
        }

    }
    cout<<cnt<<'\n';
}	


signed main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}