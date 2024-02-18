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
		vector<string>s(8);
		for (int i = 0; i < 8; i++) {
			cin >> s[i];
		}
		string ans;
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				if (s[i][j] != '.') {
					ans.push_back(s[i][j]);
				}
			}
		}
		cout << ans << '\n';
	}

	return 0;
}
