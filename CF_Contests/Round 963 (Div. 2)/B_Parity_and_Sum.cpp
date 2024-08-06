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
    vector<int>v(n);
    fore(i,0,n)cin>>v[i];
    sort(v.begin(), v.end());
    // fore(i,0,n)cout<<v[i]<<" ";

    // check for uni-parity
    bool check_odd=1;
    for(int x:v){
        if(x%2==0){
            check_odd=0;
            break;
        }
    }

    bool check_even=1;
    for(int x:v){
        if(x%2!=0){
            check_even=0;
            break;
        }
    }

    if(check_odd or check_even){
        cout<<0<<'\n'; 
        return;
    }

    int large_odd=0;
    for(int i=n-1; i>=0; i--){
        if(v[i]%2!=0){
            large_odd=v[i];
            break;
        }
    }
    int large_even=0;
    for(int i=n-1; i>=0; i--){
        if(v[i]%2==0){
            large_even=v[i];
            break;
        }
    }

    // cout<<large_odd<<" "<<large_even;


    int ans=0;
    fore(i,0,n){
        if(v[i]%2==0){
            if(v[i]<large_odd){
                ans++;
                large_odd+=v[i];
                // cout<<large<<" ";
            }
            else{
                large_odd+=large_even;
                ans+=2;
                // cout<<large<<" ";
            }
        }
    }

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

// upsolve