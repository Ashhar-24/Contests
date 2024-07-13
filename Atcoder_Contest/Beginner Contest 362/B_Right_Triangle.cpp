#include <bits/stdc++.h>
#define int long long int
#define fore(i,a,b) for(int i = a; i < b; i++)
using namespace std;

// bool isprime(int n){
//     if(n==1)return false;
//     for(int i=2; i<=sqrt(n); i++){
//         if(n%i==0)return false;
//     }
//     return true;
// }

void solve(){
    int xa,ya,xb,yb,xc,yc; cin>>xa>>ya>>xb>>yb>>xc>>yc;

    //check whether ABC forms right angled triangle: Ab^2 + Bc^2 = Ac^2
    int ab = ((xa-xb)*(xa-xb) + (ya-yb)*(ya-yb));
    int bc = ((xb-xc)*(xb-xc) + (yb-yc)*(yb-yc));
    int ac = ((xa-xc)*(xa-xc) + (ya-yc)*(ya-yc));

    if(ab + bc == ac || ab + ac == bc || ac + bc == ab) cout<<"Yes\n";
    else cout<<"No\n";
    

}	


signed main() {
    int t=1; 
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;
}