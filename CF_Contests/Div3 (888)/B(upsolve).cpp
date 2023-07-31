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
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		/*
			In my approach, I was doing it in O(n^2):
			In 1 sec: 10^7 operations occur. In the question, 2sec was  alloted to per test case
			And here n<=10^5, so n^2==10^10 > 2*10^7. Therefore it was giving TLE.

			for (int i = 0; i < n; i++) {
			if (arr[i] % 2 != 0) {
				for (int j = i + 1; j < n; j++) {
					if (arr[j] % 2 != 0) {
						if (arr[i] > arr[j]) {
							int c = arr[i];
							arr[i] = arr[j];
							arr[j] = c;
						}
					}
				}
			}
			else {
				for (int j = i + 1; j < n; j++) {
					if (arr[j] % 2 == 0) {
						if (arr[i] > arr[j]) {
							int c = arr[i];
							arr[i] = arr[j];
							arr[j] = c;
						}
					}
				}
			}
		}
		*/

		// O(nlogn) [due to sorting done]

		vector<int>odd;
		vector<int>even;

		for (int i = 0; i < n; i++) {
			if (arr[i] % 2 == 0) {
				even.push_back(arr[i]);
			}
			else {
				odd.push_back(arr[i]);
			}
		}

		sort(odd.begin(), odd.end());
		sort(even.begin(), even.end());

		// int i = 0, j = 0;
		// while (i < n && j < odd.size()) {
		// 	if (arr[i] % 2 != 0) {
		// 		arr[i] = odd[j];
		// 		i++;
		// 		j++;
		// 	}
		// 	else {
		// 		i++;
		// 	}
		// }

		// i = 0, j = 0;
		// while (i < n && j < even.size()) {
		// 	if (arr[i] % 2 == 0) {
		// 		arr[i] = even[j];
		// 		i++;
		// 		j++;
		// 	}
		// 	else {
		// 		i++;
		// 	}
		// }
		int j = 0, k = 0;
		for (int i = 0; i < n; i++) {
			if (arr[i] % 2 != 0) {
				arr[i] = odd[j];
				j++;
			}
			else {
				arr[i] = even[k];
				k++;
			}
		}

		// for (int i = 0; i < n; i++) {
		// 	cout << arr[i] << " ";
		// }
		// cout << '\n';

		bool check = 1;
		for (int i = 0; i < n - 1 ; i++) {
			if (arr[i] > arr[i + 1]) {
				check = 0;
				break;
			}
		}
		(check == 1) ? cout << "Yes" << '\n' : cout << "No" << '\n';

	}
	return 0;
}
