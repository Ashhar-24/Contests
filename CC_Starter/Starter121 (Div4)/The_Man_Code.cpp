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

        int max=0, min=0;

        max= ceil(n/2.0);
        min= ceil(n/3.0);

        cout << max << " " << min << '\n';

        // Logic=> https://discuss.codechef.com/t/mancode-editorial/116121

    }
}
