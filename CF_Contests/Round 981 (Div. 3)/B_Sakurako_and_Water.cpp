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
#define debug(x) cout<<x<<endl 
// int expo(int a, int b, int mod) {int res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}		// (a^b)%m
// bool isprime(int n){ if(n==1)return false; for(int i=2; i<=sqrt(n); i++){ if(n%i==0)return false;} return true;}
// vector<int> convertbinary64(int n){ vector<int> v(64,0); int i=0; while(n>0){ v[i]=n%2; n/=2; i++;} return v;}   // this represents the binary form in reverse manner
// int convertdecimal(vector<int> v){int ans=0; for(int i=0; i<64; i++){ ans+=v[i]*pow(2,i);}return ans;}
long long lcm(vector<int>&nums){
        long long ans= nums[0];
        int n= nums.size();
        for(int i=1; i<n; i++){
            ans = (nums[i]*nums[i-1])/ gcd(nums[i], nums[i-1]);
        }
        return ans;
}

    long long Gcd(vector<int>&nums){
        long long ans=1;
        for(int i=1; i<nums.size(); i++){
            ans= gcd(nums[i], nums[i-1]);
        }
        return ans;
    }

void solve(){
    vector<int>nums= {2,29};
    cout<<lcm(nums)<<" "<<Gcd(nums);
    // int n; cin>>n;
    // int arr[n][n];
    // fore(i,0,n){
    //     fore(j,0,n)cin>>arr[i][j];
    // }

    // int cnt=0;

    // fore(i,0,n){
    //     fore(j,0,n){
    //         if(arr[i][j]<0){
    //             int x=i, y=j, val=INT_MAX;
    //             while(x<n and y<n){
    //                 val=min(val, arr[x][y]);
    //                 arr[x][y]=0;
    //                 x++; y++;
    //             }
    //             cnt+=abs(val);
    //         }
    //     }
    // }

    // cout<<cnt<<endl;
    // char c='a';
    // cout<<(int)c;
}	


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t=1; 
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;
}