#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n,k; cin>>n>>k;

    int ct = (k * (k + 1)) / 2;
    ct += k - 1;
    if (n >= ct)cout << "YES" << endl;
    else cout << "NO" << endl;
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
    Since, we just have to find whether there can be a string of length n with k different islands.
    And each islnad is supposed to have different length.
    The island is defined by 0's either bounded by 1's (or) by the ends of the string ie, they appear at the 
    beginning or end of the string.

    So the optimal way to create such a string is:
    010010001.....
    Now for finding the min length of the string, we count the number of 0's and 1's in the string.
    len = ct(0) + ct(1) 
    ct(0)= k*(k+1)/2
    ct(1)= k-1, where k is the number of islands required.
    ie, len shows the min length of the string required to create k different islands.

    So, if n >= len then we can create such a string.
    else not possible.
*/