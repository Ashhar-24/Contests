int pairs(int k, vector<int> arr) {
    sort(arr.begin(), arr.end());
    vector<int>ans;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        /* instead of taking the difference we look for the number in the given array using binary search,
            and push back the index as there can be multiple numbers satisfying the condition and finally return
            the size of the array which depicts the number of pairs.
        */

        int diff = abs(k + arr[i]);
        if (binary_search(arr.begin(), arr.end(), diff)) {
            ans.push_back(i);
        }
    }

    return ans.size();

}