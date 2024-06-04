#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    int ct=0;
    while(n>0){
        int x= n%2;
        if(x==1) ct++;
        n/=2;
    }
    if(ct%2==0) cout<<"EVEN"<<'\n';
    else cout<<"ODD"<<'\n';
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}