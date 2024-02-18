#include <iostream>
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
		int n, k, x;
		cin >> n >> k >> x;

		if (k - x > 1 || k > n ) {
			cout << "-1" << '\n';
		}
		else {
			int sum = 0;
			for (int i = 1; i < k; i++) {
				sum += i;
			}

			for (int i = 1; i <= n - k; i++) {
				if (k == x) {
					sum += x - 1;
				}
				else {
					sum += x;
				}

			}

			cout << sum << '\n';
		}
	}

	return 0;
}