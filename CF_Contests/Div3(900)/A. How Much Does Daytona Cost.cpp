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
		int n, k;
		cin >> n >> k;
		// vector<int>v(n);
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		bool check = 0;
		for (int i = 0; i < n; i++) {
			if (arr[i] == k) {
				check = 1;
				break;
			}
		}
		(check == 1) ? cout << "yes" << '\n' : cout << "no" << '\n';
	}
	return 0;
}
