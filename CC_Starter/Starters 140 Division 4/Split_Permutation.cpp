#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    if(n%2==0){
        for(int i=1; i<=n/2; i++){
            cout<<i<<" "<<n-i+1<<" ";
        }
    }
    else{
        for(int i=1; i<=n/2; i++){
            cout<<i<<" "<<n-i<<" ";
        }
        cout<<n;
    }
    cout<<endl;
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