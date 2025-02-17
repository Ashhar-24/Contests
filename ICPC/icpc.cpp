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
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define N 100005
int prime[N + 1];
using namespace std;

template <typename T>
ll intersect(T& a,T& b){
    vector<typename T::value_type> out;
    set<typename T::value_type> x(all(a));
    set<typename T::value_type> y(all(b));
    set_intersection(all(x),all(y),back_inserter(out));
    return static_cast<ll>(out.size());
}

void sieve(){
    for(int i = 2;i <= N;i++) prime[i] = 1;
    prime[0] = prime[1] = 0;
    for(int i = 2;i*i <= N;i++){
        if(prime[i] == 1){
            for(int j = i*i;j <= N;j += i) prime[j] = 0;
        }
    }
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> x(n), a(n);
    
    for(auto &i : x) cin >> i;
    for(auto &i : a) cin >> i;
    
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    vector<bool> vis(n, false);
    
    pq.push({0, 0});
    ll ans = 0;
    ll edges_count = 0;
    
    while(!pq.empty() && edges_count < n) {
        ll cost = pq.top().ff;
        ll curr = pq.top().ss;
        pq.pop();
        
        if(vis[curr]) continue;
        
        vis[curr] = true;
        ans += cost;
        edges_count++;

        for(ll next = 0; next < n; next++) {
            if(!vis[next]) {
                ll ans = min(a[curr], a[next]) * abs(x[curr] - x[next]);
                pq.push({ans, next});
            }
        }
    }
    
    cout << ans << "\n";
}


int main(){
    fast_io;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}