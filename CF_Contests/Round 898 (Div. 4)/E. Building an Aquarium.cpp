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

	int t; cin >> t;
	while (t--) {

		int n, x;
		cin >> n >> x;
		int arr[n];
		int totalsum = 0, max_col = -1, min_col = 1;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			totalsum += arr[i];
			max_col = max(max_col, arr[i]);
			min_col = min(min_col, arr[i]);

		}

		int t_area = n * max_col;
		int left_sum = t_area - totalsum;

		// cout << left_sum << '\n';
		if (left_sum == 0) {
			while (true) {
				x -= n;
				max_col++;
				if (x < n) {
					cout << max_col << '\n';
					break;
				}
			}
		}
		else if (left_sum == x) {
			cout << max_col << '\n';
		}
		else if (left_sum > x) {
			while (true) {
				left_sum -= n;
				if (left_sum == 0) {
					cout << min_col + 1 << '\n';
					break;
				}
				max_col--;
				if (left_sum <= x) {
					cout << max_col << '\n';
					break;
				}
			}
		}
		// left_sum < x
		else {
			x -= left_sum;
			if (x < 0) {
				cout << max_col << '\n';
			}
			else {
				while (true) {
					x -= n;
					if (x <= 0) {
						cout << max_col << '\n';
						break;
					}
					max_col++;
				}
			}

		}


	}
	return 0;
}
