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

    int n; cin >> n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<pair<int, int>>v(n);
    // traversing the given array and storing along with it's index

    for (int i = 0; i < n; i++) {
        v[i] = {arr[i], i};
    }

    //sorting on the basis of first element of the pair
    sort(v.begin(), v.end());

    int counta = 0;
    for (int i = 0; i < n; i++) {
        if (v[i].second == i) continue;
        else {
            counta++;

            // v[i] is getting swapped with the index where it was previously present
            swap(v[i], v[v[i].second]);     // v[i] gets to it's required position
            i--;                     // to check if the element swapped with v[i] is in it's correct position
        }
    }

    // checking the same for descending order because the condition given is |arr[i]-arr[i-1]|
    sort(v.begin(), v.end(), greater <pair<int, int>>());

    int countd = 0;
    for (int i = n - 1; i >= 0 ; i--) {
        if (v[i].second == i) continue;
        else {
            countd++;

            // v[i] is getting swapped with the index where it was previously present
            swap(v[i], v[v[i].second]);     // v[i] gets to it's required position
            i++;                     // to check if the element swapped with v[i] is in it's correct position
        }
    }

    cout << min(counta, countd);

    return 0;
}
