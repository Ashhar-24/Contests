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

	int n;
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int maxi = -1;

	// check for maximum element between 1 to n-1
	for (int i = 1; i < n; i++) {
		if (arr[i] > maxi) {
			maxi = arr[i];
		}
	}

	// if arr[0] is itself the largest, print 0
	if (arr[0] > maxi) {
		cout << 0;
	}

	// if arr[0] is not largest or has a multiple copy in [1,n-1], print diff+1
	else {
		cout << maxi - arr[0] + 1;
	}

	return 0;
}
