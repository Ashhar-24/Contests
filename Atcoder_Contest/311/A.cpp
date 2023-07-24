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

	int n; cin >> n;
	string s;
	cin >> s;

	set<char>ans;
	int count = 0;

	while (count < n) {
		ans.insert(s[count]);
		if (ans.size() == 3) {
			break;
		}
		count++;
	}

	cout << count + 1 << '\n';
	return 0;
}
