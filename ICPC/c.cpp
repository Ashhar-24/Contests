#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define vpll vector<pll>
#define mii map<int, int>
#define mll map<ll,ll>
#define ump unordered_map
#define prq priority_queue
#define lb lower_bound
#define ub upper_bound
#define mc <char,int>
#define si set<int>
#define sc set<char>
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define acm accumulate
#define pb push_back
#define ff first
#define ss second
#define eb emplace_back
#define mod 100000007
using namespace std;

void solve(){
        int n;
        cin >> n;

        vector<ll> positions(n), costs(n);
        for (int i = 0; i < n; ++i) {
            cin >> positions[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> costs[i];
        }

        cout << calculateMinCost(positions, costs) << endl;

}


int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}