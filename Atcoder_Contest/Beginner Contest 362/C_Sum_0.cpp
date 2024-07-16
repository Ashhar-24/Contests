#include <bits/stdc++.h>
#define int long long
#define fore(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
using namespace std;

// bool isprime(int n){
// 	if(n==1)return false;
// 	for(int i=2; i<=sqrt(n); i++){
// 		if(n%i==0)return false;
// 	}
// 	return true;
// }

void solve() {
	int n; cin >> n;
	vector<int> left(n), right(n);

	int lb = 0, rb = 0;
	fore(i, 0, n) {
		cin >> left[i] >> right[i];
		lb += left[i];
		rb += right[i];
	}

	if (lb <= 0 and rb >= 0) {
		cout << "Yes\n";
		int target = 0, currsum = lb;
		vector<int>ans;
		for (auto i : left)ans.pb(i);

		// for (auto i : left) cout << i << " ";

		fore(i, 0, n) {
			int temp = min(target - currsum, right[i] - left[i]);
			ans[i] += temp;
			currsum += temp;
		}

		for (auto i : ans) cout << i << ' ';
	}
	else cout << "No\n";

}


signed main() {
// #ifndef ONLINE_JUDGE
// 	freopen ("../../../input.txt", "r", stdin);
// 	freopen ("../../../output.txt", "w", stdout);
// #endif

	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}

// upsolve (D. Tarak)