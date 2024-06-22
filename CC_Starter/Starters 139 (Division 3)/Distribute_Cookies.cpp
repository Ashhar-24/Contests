#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n,m; cin>>n>>m;

    if(n>m){
        cout<<n-m<<endl;
    }
    /*
        If the no of children is greater than the no of cookies, then we simply take the difference of the two and 
        as we are needed to give atleast 1 cookie to each child, by doing so we satisfy our condition.

        Now, if the cookies are more than the children, then what we do is take the min of n%m (ie time to destroy) and
        n-(n%m) (ie time to create) and that will be our answer.

        eg: N=5, M=17
            17%5=2
            5-2=3
            min(2,3)=2
            Hence, 2 is the answer.
        
        eg: N=5, M=18
            18%5=3
            5-3=2
            min(3,2)=2
            Hence, 2 is the answer.
    */

    // else if(m%n==0){
    //     cout<<0<<endl;
    // }
    // else{
    //     int rem= m%n;
    //     if(rem<= (n/2)){
    //         cout<<rem<<endl;
    //     }
    //     else{
    //         cout<<n-rem<<endl;
    //     }
    // }

    // Alternative Code
    else{
        int ans= min(m%n, n-m%n);
        cout<<ans<<endl;
    }
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}