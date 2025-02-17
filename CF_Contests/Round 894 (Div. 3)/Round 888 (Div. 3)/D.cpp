#include <iostream>
#include <vector>
#include <set>
using namespace std;

void init() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	long long n; cin >> n;
	vector<long long>v(n - 1);
	for (int i = 0; i < n - 1; i++) {
		cin >> v[i];
	}

	long long k = (n * (n + 1)) / 2;

	// checking if there's any element greater sum k, return "No" straightaway
	for (auto x : v) {
		if (x > k) {
			cout << "No" << '\n';
			return ;
		}
	}

	v.insert(v.begin(), 0);

	// storing consecutive difference
	vector<long long> diff;
	for (int i = 1; i < n ; i++) {
		diff.push_back(v[i] - v[i - 1]);
	}

	// set of all the nukbers from 1 to n
	set <long long> st;
	for (int i = 1; i <= n; i++) {
		st.insert(i);
	}

	int d = -1;
	for (int i = 0; i < diff.size(); i++) {
		// checking if elements in diff is in range [1,n]
		if (diff[i] <= n && st.count(diff[i])) {
			st.erase(diff[i]);
		}
		else {

			// if there are two numbers greater than n (or) two elements repeated twice, return "No"
			if (d != -1) {
				cout << "No" << '\n';
				return ;
			}
			// storing in d => the element greater than n (or) the element repeated in vector diff
			d = diff[i];
		}
	}

	// if all the elements in vector diff is present in set of range [1,n] eg: n=4 and v=[1,3,6]
	if (d == -1) {
		cout << "Yes" << '\n';
		return ;
	}

	// checking if the sum of remaining elements in set of range [1,n] is equal to d
	for (auto x : st) {d -= x;}

	(d == 0) ? cout << "Yes" << '\n' : cout << "No" << '\n';
}

int main() {
	init();

	int t; cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}
