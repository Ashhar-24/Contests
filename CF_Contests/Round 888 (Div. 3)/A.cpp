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
		int n, m, k, h; cin >> n >> m >> k >> h;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		// O (m^2. log m)

		set<int>sdiff;						// storing the elements into set so that the difference is not repeated
		for (int i = 1; i <= m; i++) {
			for (int j = i + 1; j <= m; j++) {
				if (i != j) {
					sdiff.insert(k * (j - i));
				}
			}
		}

		int count = 0;
		for (int i = 0; i < n; i++) {
			int diff = abs(h - arr[i]);
			if (sdiff.count(diff) == 1) {
				count++;
			}
		}

		/* Better approach O(n):
			We first count the max diff that is possible by taking the diff of first and last step.
			int maxdiff= (m-1)*k;

			Now we simply, calculate the individual diff and check that diff<=max %% diff %k==0
			as the diff will always be lesser than max and will be a multiple of k.
			[as the questions says: H-hi == (j-i)*k] And the diff will always be greater than 0,
			as no two people can stand on same step.

			for(int i=0; i<n;i++){
				int diff= abs(h-arr[i]);

				if(diff>0 && diff <= maxdiff && diff%k==0){
					count++;
				}
			}

		*/

		cout << count << '\n';
	}

	return 0;
}
