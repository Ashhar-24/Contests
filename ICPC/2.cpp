#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define vpll vector<pll>
#define mii map<int, int>
#define mll map<ll, ll>
#define ump unordered_map
#define prq priority_queue
#define lb lower_bound
#define ub upper_bound
#define mc <char,int>
#define si set<int>
#define sc set<char>
#define f(i, s, e) for (long long int i = s; i < e; i++)
#define cf(i, s, e) for (long long int i = s; i <= e; i++)
#define rf(i, e, s) for (long long int i = e - 1; i >= s; i--)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define acm accumulate
#define pb push_back
#define ff first
#define ss second
#define eb emplace_back
#define mod 100000007

using namespace std;
void solve()
{
    ll n, mincoll = INT_MAX;
    cin >> n;
    vector<ll> ele(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ele[i];
    }
    vector<vector<ll>> v(n, vector<ll>());
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < ele[i]; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        set<ll> a, b, c, d;
        if (i - 1 >= 0)
        {
            for (int j = 0; j < ele[i - 1]; j++)
            {
                a.insert(v[i - 1][j]);
            }
        }
        if (i + 1 < n)
        {
            for (int j = 0; j < ele[i + 1]; j++)
            {
                a.insert(v[i + 1][j]);
            }
        }
        // if (i - 1 >= 0)
        // {
        //     for (int j = 0; j < ele[i - 1]; j++)
        //     {
        //         b.insert(v[i - 1][j]);
        //     }
        // }
        // if (i + 2 < n)
        // {
        //     for (int j = 0; j < ele[i + 2]; j++)
        //     {
        //         b.insert(v[i + 2][j]);
        //     }
        // }

        for (int j = 0; j < ele[i]; j++)
        {
            c.insert(v[i][j]);
        }
        if (i + 1 < n)
        {
            for (int j = 0; j < ele[i + 1]; j++)
            {
                c.insert(v[i + 1][j]);
            }
        }

        for (int j = 0; j < ele[i]; j++)
        {
            d.insert(v[i][j]);
        }
        if (i + 2 < n)
        {
            for (int j = 0; j < ele[i + 2]; j++)
            {
                d.insert(v[i + 2][j]);
            }
        }
        ll cnt = 0;
        if (i - 1 >= 0)
            cnt += ele[i - 1];
        cnt += ele[i] * 2;
        if (i + 1 < n)
            cnt += ele[i + 1] * 2;
        if (i + 2 < n)
            cnt += ele[i + 2];
        cnt -= (a.size() + c.size() + d.size());
        mincoll = min(mincoll, cnt);
        // cout << cnt << " ";
        // cout << a.size() << " " << b.size() << " " << c.size() << " " << d.size() << " " << endl;
    }
    cout << mincoll;
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}