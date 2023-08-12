vector<int> missingNumbers(vector<int> arr, vector<int> brr) {
    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());

    set<int>ans;
    int j = 0;
    int n = brr.size();
    for (int i = 0; i < n; i++) {
        if (brr[i] == arr[j]) {
            j++;
        }
        else {
            ans.insert(brr[i]);
        }
    }
    // sort(ans.begin(), ans.end());
    vector<int>v;

    // naive method
    for (int x : s) {
        v.push_back(x);
    }

    // using copy function
    // copy(ans.begin(), ans.end(), back_inserter(v));

    return v;

}
