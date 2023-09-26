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
		int n; cin >> n;
		int arr[n];
		arr[0] = 1;
		for (int i = 1; i < n; i++) {
			arr[i] = arr[i - 1] + 2;
		}

		for (int i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
		cout << '\n';
	}
	return 0;
}
