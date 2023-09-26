#include <iostream>
#include <vector>
#include <algorithm>
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
		long long n, k;
		cin >> n >> k;
		long long x; cin >> x;

		long long max_sum = 0;
		long long min_sum = k * (k + 1) / 2;

		int j = n;
		for (int i = 1; i <= k; i++) {
			max_sum += j;
			j--;
		}

		if (x > max_sum ) {
			cout << "no" << '\n';
		}
		else if (x < min_sum) {
			cout << "no" << '\n';
		}
		else {
			cout << "yes" << '\n';
		}

	}
	return 0;
}
