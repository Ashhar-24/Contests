#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string a,b; cin>>a>>b;
    char temp= b[0];
    b[0]=a[0];
    a[0]=temp;
    cout<<a<<" "<<b<<'\n';
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}