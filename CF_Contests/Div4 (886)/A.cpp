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
		/*
			Optimised Soln:
			Take it in a vector/array, sort it and check whether the sum of last two elements >=10 or not.

		*/

		vector<int>v(3);
		for (int i = 0; i < 3; i++) {
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		if (v[1] + v[2] >= 10)
			cout << "Yes" << '\n';
		else
			cout << "No" << '\n';
	}

	return 0;
}
