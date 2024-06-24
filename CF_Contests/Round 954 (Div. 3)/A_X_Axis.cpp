#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int a,b,c; cin>>a>>b>>c;
    int diff1= abs(b-a)+abs(c-a);
    int diff2= abs(a-b)+abs(c-b);
    int diff3= abs(a-c)+abs(b-c);
    cout<<min(diff1, min(diff2, diff3))<<'\n';
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}