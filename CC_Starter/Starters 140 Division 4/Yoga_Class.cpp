#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n,x,y; cin>>n>>x>>y;
    int ans1= n*x;
    int ans2= (n/2)*y + (n%2)*x;
    int ans3= (n/2)*y;
    cout<<max(ans1, max(ans2,ans3))<<'\n';
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}