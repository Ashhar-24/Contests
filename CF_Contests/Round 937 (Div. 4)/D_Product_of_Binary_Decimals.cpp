#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isbool(int i){
    while(i>0){
        if(i%10==1 or i%10==0){
            i/=10;
        }
        else return false;
    }
    return true;
}

bool check(int n){
    if(isbool(n)) return true;

    int temp=-1;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0 and isbool(i)==1){
            temp=i;
        }
    }
    if(temp==-1) return false;
    else{
        int m= n/temp;
        bool rec= check(m);
        if(rec) return true;
        else return false;
    }
}

void solve(){
    int n; cin>>n;

    if(check(n)) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';

}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

/*
    Upsolve -> Used Brute force and recurssion to upsolve
    Other approach is by using dp.

*/
