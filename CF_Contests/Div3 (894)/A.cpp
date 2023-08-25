#include <iostream>
#include <queue>

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
		int n, m;
		cin >> n >> m;

		char arr[n][m];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> arr[i][j];
			}
		}

		queue<char>name;
		name.push('v');
		name.push('i');
		name.push('k');
		name.push('a');

		// string s = "vika";

		/*
			When we want to traverse the column wise, we take the column in the outer loop and
			row in the inner loop.
		*/

		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (arr[j][i] == name.front()) {
					name.pop();
					break;
				}
			}
		}

		name.empty() ? cout << "yes" << '\n' : cout << "no" << '\n';
	}
}