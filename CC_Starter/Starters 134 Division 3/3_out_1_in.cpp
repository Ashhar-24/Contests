#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n,q; cin>>n>>q;
    vector<ll> v(n);
    for(auto &x:v) cin>>x;

    vector <ll> ans(n);
    multiset <ll> s1,s2;   // s1 for min elements, s2 for max elements
    ll sum1=0, sum2=0;

    ll index=-1;

    for( auto x: v){
        s1.insert(x);
        sum1+=x;
        while(s1.size()>=s2.size()){
            ll temp = *s1.rbegin();
            s1.erase(s1.find(temp));
            sum1-=temp;
            s2.insert(temp);
            sum2+=temp;
        }
        while(s1.size() and s2.size() and *s1.rbegin()>*s2.begin()){
            ll temp1 = *s1.rbegin();
            ll temp2 = *s2.begin();
            s1.erase(s1.find(temp1));
            s2.erase(s2.find(temp2));

            s1.insert(temp2);
            s2.insert(temp1);
            sum1+=temp2- temp1;
            sum2+=temp1 - temp2;
        }
        ans[++index] = sum2- sum1;
    }

    while(q--){
        ll x; cin>>x;
        cout<<ans[x-1]<<" ";
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