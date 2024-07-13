#include <bits/stdc++.h>
#define int long long int
#define fore(i, a, b) for (int i = a; i < b; i++)
using namespace std;

bool isprime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void solve()
{
    int r, g, b;
    cin >> r >> g >> b;
    string s;
    cin >> s;
    int ans = 0;

    if (s == "Red")
        ans = min(g, b);
    else if (s == "Green")
        ans = min(r, b);
    else
        ans = min(r, g);

    cout << ans << endl;
}

signed main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}