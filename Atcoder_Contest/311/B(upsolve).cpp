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

	int n, d;
	cin >> n >> d;
	vector<string>s(n);
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	int count = 0, ans = 0;

	for (int j = 0; j < d; j++) {
		bool rcheck = 0;
		for (int i = 0; i < n; i++) {
			if (s[i][j] == 'x') {
				rcheck = 1;
				break;
			}
		}

		if (rcheck == 1) {
			count = 0;			// if there is any 'x' in the column we assign back count to 0
		}
		else {
			count++;					// if there isn't any 'x' in the whole column, then count++
			ans = max(ans, count);		// as we want the max. no of consecutive days, we're storing it in ans
		}
	}

	cout << ans;
	return 0;
}
