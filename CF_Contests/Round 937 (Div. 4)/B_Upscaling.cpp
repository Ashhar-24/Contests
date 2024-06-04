#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    int rows= 2*n, cols=2*n;
    for(int i=0; i<rows; i++){
        if(i%4==0 or i%4==1){
            for(int j=0; j<cols; j++){
                if(j%4==0 or j%4==1)cout<<'#';
                else cout<<'.';
            }
        }
        else{
            for(int j=0; j<cols; j++){
                if(j%4==0 or j%4==1)cout<<'.';
                else cout<<'#';
            }
        }
        cout<<'\n';
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