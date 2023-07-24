#include <bits/stdc++.h>
using namespace std;


void init() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main() {
	init();

	int t;
	cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		vector<int>v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}

		sort(v.begin(), v.end());        // so that the diff b/w elements becomes least
		int i = 0, j = 1, count = 0;	// initializing two pointers
		int ans = 0;

		while (i < n && j < n) {
			if (v[j] - v[j - 1] <= k) {
				count++;
				j++;
			}
			else {
				j++;
				i = j;
				count = 0;			// resetting count = 0
			}
			ans = max(ans, count + 1);
		}
		if (n == 1) {
			cout << 0 << '\n';
		}
		else {
			cout << n - ans << '\n';
		}

	}

	return 0;
}
