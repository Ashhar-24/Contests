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
    vector<int>d(m);
    for(int i=0; i<m; i++){
        cin>>d[i];
    }

    //ct1: Stores the count of elements in brr
    //ct2: Stores the count of elements in d

    map<int, int> ct1, ct2;
    for(int i=0; i<n; i++){
        if(arr[i]!=brr[i]){
            ct1[brr[i]]++;
        }
    }

    for(int i=0; i<m; i++){
        ct2[d[i]]++;
    }
    
    bool check=1;

    // checking whether brr[i] is present atleast min no of times in d

    for(auto [x,y]: ct1){
        if(ct2[x]<y) check=0;
    }

    // Also the element in 'd' must be present in brr, because all the modifications has to be done

    if(count(brr.begin(), brr.end(),d[m-1])==0) check=0;

    if(check)cout<<"YES"<<'\n';
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


// Upsolve