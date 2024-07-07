#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &x : v)
        cin >> x;

    map<ll, ll> mp;
    for (auto x : v)
        mp[x]++;

    // int maxFreq = INT_MIN;
    // int maxKey = 0;

    // int minKey = INT_MAX;
    // int minFreq = INT_MAX;

    // for(auto x: mp) {
    //     // Update maximum frequency and corresponding key
    //     if(x.second > maxFreq) {
    //         maxFreq = x.second;
    //         maxKey = x.first;
    //     } else if (x.second == maxFreq) {
    //         maxKey = min(maxKey, x.first);
    //     }

    //     // Update minimum frequency and corresponding key
    //     if(x.second < minFreq) {
    //         minFreq = x.second;
    //         minKey = x.first;
    //     } else if (x.second == minFreq) {
    //         minKey = min(minKey, x.first);
    //     }
    // }

    // int temp1= ceil((n-maxFreq)/2.0)*2*maxKey;
    // int temp2 = ceil((n-minFreq)/2.0)*2*minKey;

    ll ans = __LONG_LONG_MAX__;
    for (auto x : mp)
    {
        ans = min(ans, (n - x.second) * x.first);
    }

    cout << min(ans, n) << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}