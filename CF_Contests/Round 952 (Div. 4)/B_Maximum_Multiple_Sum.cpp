#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    int x; int maxi=INT_MIN;

    // i->x ; j->k
    for(int i=2; i<=100; i++){
        int k= (n/i);
        int ans = i * (k*(k+1)/2);
        if(ans>maxi){
            maxi=ans;
            x=i;
        }

    }
    cout<<x<<'\n';
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}