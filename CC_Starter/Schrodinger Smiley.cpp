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
		int n; cin >> n;
		string s; cin >> s;
		int count = 0;

		int i = 0;
		while (i < n) {
			int t = i + 1;
			if (s[i] == ':') {
				i++;
				while (s[i] != ':') {
					if (s[i] == ')') {
						i++;
					}
					else
						break;

				}
				if (s[i] == ':' && t != i) {
					count++;
				}

			}
			else {
				i++;
			}

		}


		cout << count << '\n';


	}

	return 0;
}
