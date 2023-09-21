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
		string s;
		cin >> s;

		if (s == "abc") cout << "Yes" << '\n';
		else if (s == "bca" || s == "cab") cout << "No" << '\n';
		else cout << "Yes" << '\n';


	}
	return 0;
}
