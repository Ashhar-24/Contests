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