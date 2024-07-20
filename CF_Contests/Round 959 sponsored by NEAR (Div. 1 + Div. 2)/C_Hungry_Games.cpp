#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define fore(i,a,b) for(int i = a; i < b; i++)
#define revfore(i,a,b) for(int i = a; i >= b; i--)
using namespace std;

// bool isprime(int n){
//     if(n==1)return false;
//     for(int i=2; i<=sqrt(n); i++){
//         if(n%i==0)return false;
//     }
//     return true;
// }
// vector<int> convertbinary64(int n){
//     vector<int> v(64,0);
//     int i=0;
//     while(n>0){
//         v[i]=n%2;
//         n/=2;
//         i++;
//     }
//     return v;       // this represents the binary form in reverse manner
// }

// int convertdecimal(vector<int> v){
//     int ans=0;
//     for(int i=0; i<64; i++){
//         ans+=v[i]*pow(2,i);
//     }
//     return ans;
// }

void solve(){
    int n,x; cin>>n>>x;


    // vector<int>v(n);
    // fore(i,0,n)cin>>v[i];
    int cnt=0;

    // brute force -> O(n^2)
    // fore(i,0,n){
    //     int g=0;
    //     fore(j,i,n){
    //         if(g+v[j]<=x){
    //             g+=v[j];
    //             cnt++;
    //         } 
    //         else g=0; 
    //     }
    // }

    vector<int> v(n+1, 0), pre(n+1,0), dp(n+3,0);
    for(int i=1; i<=n; i++){
        cin>>v[i];
        pre[i]=v[i];
        pre[i]+=pre[i-1];
    }

    // dp[i] -> represents the cnt of subarray such that it starts from index i and has end sum <= k.

    for(int i=n; i>=1; i--){
        if(v[i]>x) dp[i]+=dp[i+1];
        else{           
            // applying binary search on prefix array to find the end index of subarray till where sum<=k.
            int l= i, r=n, index=i;
            while(l<=r){
                int mid = (l+r)/2;
                int currsum = pre[mid] - pre[i-1];
                if(currsum<=x){
                    index=mid;
                    l = mid+1;
                }
                else r=mid-1;
            }

            dp[i]= (index - i + 1);
            dp[i]+=dp[index+2];         // As the next subarray will have g=0.
        }
    }

    fore(i,1,n+1)cnt+=dp[i];

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

// upsolve