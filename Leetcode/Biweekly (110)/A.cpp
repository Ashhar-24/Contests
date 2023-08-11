/*
#include <bits/stdc++.h>
using namespace std;


void init() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int roundno(int n) {
	int q = n / 10;

	// check if n is single digit or not
	// q==0 => single digit
	if (q == 0 && n >= 5) {
		q += 1;
	}
	else {
		if (n % 10 >= 5) {
			q += 1;
		}
	}

	return q * 10;

}

int main() {
	init();

	int n; cin >> n;
	int round = roundno(n);
	cout << round;

	return 0;
}
*/

class Solution {
public:
	int accountBalanceAfterPurchase(int purchaseAmount) {
		int n = purchaseAmount;

		int q = n / 10;
		if (q == 0 && n > 5) {
			q = 1;
		}
		else {
			if (n % 10 >= 5) {
				q += 1;
			}
		}

		n = q * 10;

		return 100 - n;
	}
};