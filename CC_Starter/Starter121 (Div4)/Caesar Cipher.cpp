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

	int t;
	cin >> t;

	while (t--) {

		int n; cin >> n;

		string s1, s2, s3;
		cin >> s1 >> s2 >> s3;
		int jump = 0;

		if (s2[0] >= s1[0]) {
			jump = s2[0] - s1[0];
		}
		else {
			jump = ('z' - s1[0]) + (s2[0] - 'a') + 1;
		}


		if (jump >= 0) {
			for (int i = 0; i < n; i++) {
				int skip = jump;
				while (skip > 0) {
					if (s3[i] == 'z') {
						s3[i] = 'a';
						// s3[i] += 1;
						skip --;
						// cout << s3[i] << "+";
					}
					else {
						s3[i] += 1;
						skip--;
						// cout << s3[i] << " +";
					}

				}
			}
		}
		else if (jump < 0) {
			for (int i = 0; i < n; i++) {
				int skip = jump;
				while (skip > 0) {
					if (s3[i] == 'a') {
						s3[i] = 'z';
						// s3[i] += 1;
						skip --;
						// cout << s3[i] << "+";
					}
					else {
						s3[i] -= 1;
						skip--;
						// cout << s3[i] << " +";
					}

				}
			}
		}


		cout << s3 << '\n';



	}

	return 0;
}