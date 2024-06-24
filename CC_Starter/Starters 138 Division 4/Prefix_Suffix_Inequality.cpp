#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    for(int i=1; i<n; i++) cout<<3<<" ";
    cout<<1<<'\n';
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
    Constructive Problem: using Bitwise Operators

    a^0=a | a^a=0 
    a&a=a | a&0=0

    What is new here is that prefix/suffix XOR,AND of [x] is always [x].
    As for an array, trivially the suffix/prefix sum always starts from the number itself.

    Here, using hit and trial method, we need to find the array. We start from smaller no like 3 and calculate both
    prefix and suffix using both operators.
    After that, by changing last element by 1 both the conditions gets satisfied.

    [No logic, just hit and trial]
    
*/