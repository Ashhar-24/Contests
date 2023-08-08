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

	int n, m; cin >> n >> m;
	int arr[m][2];
	for (int i = 0; i < m; i++) {
		for (int j = 0 ; j < 2; j++) {
			cin >> arr[i][j];
		}
	}
	/*
		1. Graph Approach!!!

		2. Map appraoch:
		basic idea is that we first traverse and see how many times that player is weaker than someone.
		If there are multiple players whose vis ==0 ie, there are multiple players who are not weaker than other
		players which is not possible hence return -1 else if there is only one player whose visited is 0,
		then return 1.
	*/


	// vis stores that a particular player is smaller than someone or not
	vector<bool> vis(51, false);
	vector<int> ind(51, 0);
	for (int i = 0; i < m; i++) {
		vis[arr[i][0]] = vis[arr[i][1]] = true;
		ind[arr[i][1]]++;
	}
	int ans;
	int cnt = 0;

	for (int i = 0; i < 51; i++) {
		if (vis[i] == 1 && ind[i] == 0) {
			ans = i;
			cnt++;
		}
	}
	if (cnt != 1) cout << "-1" << "\n";
	else cout << ans << "\n";

	return 0;
}
