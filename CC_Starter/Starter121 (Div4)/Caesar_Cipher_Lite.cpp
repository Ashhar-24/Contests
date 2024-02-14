#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        char pt[n], ct[n];

        for (int i = 0; i < n; i++)
            cin >> pt[i];

        for (int i = 0; i < n; i++)
            cin >> ct[i];

        int ans[n];

        for (int i = 0; i < n; i++)
        {
            ans[i] = 0;
            char match = pt[i];
            while (match != ct[i])
            {
                if (match == 'Z')
                    match = 'C';
                else if (match == 'Y')
                    match = 'B';
                else if (match == 'X')
                    match = 'A';
                else
                    match+=3;
                    // match = char(match + 3);
                ans[i]++;
            }
        }

        // printing ans
        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";

        cout << endl;
    }
}