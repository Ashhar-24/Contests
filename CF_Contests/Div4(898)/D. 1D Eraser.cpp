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

		int n, k;
		cin >> n >> k;
		char ch[n];
		for (int i = 0; i < n; i++) {
			cin >> ch[i];
		}

		int i = 0;
		int count = 0;

		while (i < n) {
			if (ch[i] == 'B') {
				count++;
				i += k;
			}
			else i++;
		}

		cout << count << '\n';

	}
	return 0;
}
