#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;

    vector<int>arr(n);
    for(int i=0; i<n; i++)cin>>arr[i];

    vector<int>brr(n);
    for(int i=0; i<n; i++)cin>>brr[i];

    int m; cin>>m;
    vector<int>val(m);
    for(int i=0; i<m; i++)cin>>val[i];

    int j=0;
    bool istrue=0;

    for(int i=0; i<n; i++){
        if(arr[i]==brr[i]){
            if(arr[i]!=val[j]){
                istrue=0;
                break;
            }
            else j++;
        }
        else if(brr[i]==val[j]){
            j++;
        }
        else if(brr[i]!=val[j]){
            istrue=0;
            break;
        }
    }
    if(istrue==0)cout<<"NO"<<'\n';
    else cout<<"YES"<<'\n';
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}


// Upsolve