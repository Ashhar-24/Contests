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

	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		vector<int>v(n);

		for (int i = 0 ; i < n; i++) {
			cin >> v[i];
		}

		int start = v[0], end = v[n - 1];

		//first case when first and last tiles (elements) are same
		if (start == end) {
			int count = 0;
			for (int i = 0; i < n; i++) {
				if (v[i] == start) count++;
			}
			if (count >= k) cout << "Yes" << '\n';
			else cout << "No" << '\n';
		}

		// when not same
		else {
			int indexf = -1, indexl = -1;
			// for storing indices of first and last element when their count == k

			int count = k;
			for (int i = 0; i < n; i++) {
				// traversing and checking how many times first element is present
				if (v[i] == start) {
					count--;
					if (count == 0) {
						indexf = i;		// storing the index when count == k
						break;
					}
				}
			}

			count = k;
			for (int i = n - 1; i >= 0; i--) {
				// traversing and checking how many times first element is present
				if (v[i] == end) {
					count--;
					if (count == 0) {
						indexl = i;
						break;
					}
				}
			}

			if (indexf == -1 || indexl == -1) {
				cout << "No" << '\n';
			}
			else {
				if (indexf < indexl) {
					// comparing because if the last element is present before the first element we cannot jump back
					cout << "Yes" << '\n';
				}
				else {
					cout << "No" << '\n';
				}
			}
		}
	}

	return 0;
}
