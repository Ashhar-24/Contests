#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    
    for(int i=1; i<=26;i++){
        for(int j=1; j<=26; j++){
            for(int k=1; k<=26;k++){
                if((i+j+k) == n){
                    cout<<char('a'+i-1);
                    cout<<char('a'+j-1);
                    cout<<char('a'+k-1);
                    cout<<endl;
                    return;             // returning because there would be other pairs which would sum as 'n'
                }
            }
        }
    }
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

// upsolve :(