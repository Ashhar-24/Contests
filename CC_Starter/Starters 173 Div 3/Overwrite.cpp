#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define fore(i, a, b) for (int i = a; i < b; i++)
#define revfore(i, a, b) for (int i = a; i >= b; i--)
#define all(v) v.begin(), v.end()
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl '\n'
#define INF 1e18
#define debug(x) cout << x << endl
// int expo(int a, int b, int mod) {int res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}		// (a^b)%m
// bool isprime(int n){ if(n==1)return false; for(int i=2; i<=sqrt(n); i++){ if(n%i==0)return false;} return true;}
// vector<int> convertbinary64(int n){ vector<int> v(64,0); int i=0; while(n>0){ v[i]=n%2; n/=2; i++;} return v;}   // this represents the binary form in reverse manner
// int convertdecimal(vector<int> v){int ans=0; for(int i=0; i<64; i++){ ans+=v[i]*pow(2,i);}return ans;}

int booth(const vector<int>& s) {
    int n = s.size();
    vector<int> s2(2 * n);
    fore(i,0,n) {
        s2[i] = s[i];
        s2[i + n] = s[i];
    }
    int i = 0, j = 1, k = 0;
    while (i < n && j < n && k < n) {
        if (s2[i + k] == s2[j + k]) {
            k++;
            continue;
        }
        if (s2[i + k] > s2[j + k])
            i = i + k + 1;
        else
            j = j + k + 1;
        if (i == j)
            j++;
        k = 0;
    }
    return min(i, j);
}
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    fore(i, 0, n) cin >> a[i];
    fore(i, 0, m) cin >> b[i];

    int start = booth(b);
    vector<int> v(m);

    fore(i,0,m) v[i] = b[(start + i) % m];

    vector<vector<int>> dp(n + 1);
    dp[n] = vector<int>(); 

    for (int i = n - 1; i >= 0; i--)
    {
        vector<int> temp1;
        temp1.push_back(a[i]);
        temp1.insert(temp1.end(), dp[i + 1].begin(), dp[i + 1].end());

        vector<int> temp2;
        if (i <= n - m)
        {
            temp2 = v;
            temp2.insert(temp2.end(), dp[i + m].begin(), dp[i + m].end());
        }

        if (i <= n - m && lexicographical_compare(temp2.begin(), temp2.end(),
                                                  temp1.begin(), temp1.end()))
            dp[i] = temp2;
        else
            dp[i] = temp1;
    }

    for (int i = 0; i < dp[0].size(); i++)
    {
        cout << dp[0][i] << (i + 1 == dp[0].size() ? "\n" : " ");
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}