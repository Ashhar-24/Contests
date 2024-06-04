#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());
    int sum=v[0];
    int a= v[1];
    v.erase(v.begin()+1);
    v.push_back(a);

    for(int i=1; i<n-1; i++) sum+=(2*v[i]);
    sum+=v[n-1];
    cout<<sum<<'\n';
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}