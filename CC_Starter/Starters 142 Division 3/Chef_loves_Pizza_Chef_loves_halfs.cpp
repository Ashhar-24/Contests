#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;

    int x = ceil(log2(n));
    int ct=0;

    int next=1;
    for(int i=1; i<=x; i++){
        next*=2;
    }

    if(next==n){
        cout<<0<<"\n";
        return;
    }

    int big=0;
    while(next!=n){
        next-=2;
        big+=2;
    }
    cout<<n-big<<"\n";
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}