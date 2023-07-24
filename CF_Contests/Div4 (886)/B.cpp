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
		// optimised approach
		/*
		We are checking for the given condition ie, the no of words (a) must not be greater than 10 and
		the quality(b) must be maximum. Storing the candidate which satisfies both.
		*/

		int n; cin >> n;
		int ans, x = 0;					// ans=> For storing which participant has satisfied the condn
		// x=> for storing the max quality
		for (int i = 0; i < n; i++) {
			int a, b; cin >> a >> b;
			if (a > 10) continue;  		//continue=> Move to next iteration and discard the code
			//			 written below it
			else if (b > x) {
				x = b;
				ans = i + 1;
			}
		}
		cout << ans << '\n';
	}


	return 0;
}
