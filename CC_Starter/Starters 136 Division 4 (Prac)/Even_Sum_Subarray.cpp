#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    int ans=0;

    // for(int i=0; i<n; i++){
    //     for(int j=i; j<n; j++){
    //         int sum=0;
    //         for(int k=i; k<=j; k++){
    //             sum+=v[k];
    //         }
    //         if(sum % 2 == 0){
    //             // cout<<sum<<" ";
    //             ans= max(ans, j-i+1);
    //         } 
    //     }
    // }
    // cout<<ans<<'\n';

    /*
        As above uses O(n^3) time complexity, here's the optimised approach.
        Since we need to find the max subaaray with even sum, we start from the whole array itself. 
        If the sum of the whole array is even, then we have found our answer.
        Else, we remove the first odd element from the either of the ends and check for the condition in which
        it is of max size. Also while doing this, the even no.s encountered wont make the sum even as odd sum- even no= odd sum
    */

   int sum=0;
   for(int i=0; i<n; i++){
       sum+=v[i];
   }
   if(sum%2==0){
       cout<<n<<'\n';
       return;
   }

   int i=0, j=n-1;
   while(v[i]%2==0) i++;
   while(v[j]%2==0) j--;

   cout<<max(n-1-i, j)<<'\n';

   // O(n) time complexity

}

int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}