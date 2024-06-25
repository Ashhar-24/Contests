#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll a; cin>>a;
    if(a==2) cout<<a*a<<" "<<a*a*a<<'\n';
    else cout<<1ll*2*a<<" "<<1ll*a*a<<'\n';
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
// upsolve

/*
    Observation Based:
    As A is <=1e9 and B,C can be <=1e18, ie square of 1e9, therefore we get a hint that let's take as A^2.
    Now: A, __ ,A^2. 
    From observation, we can guess that B can 2A, 3A, .....
    Also both the condition gets satisfied.

    An edge is that when A==2, then 2A=4 and A^2=4, so we take C as A^3 and B as 2A.

    Also we can guess about this question as it is mentioned that if there are multiple solutions print any.
    Multiple solutions: B => 2A, 3A, 4A, 5A, ....
*/