// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> findSubsetIndicesWithAndEqualK(const vector<int>& arr, int k) {
//     vector<int> candidates;

//     // Step 1: Filter elements that can contribute to a valid subset
//     for (int i = 0; i < arr.size(); ++i) {
//         if ((arr[i] & k) == k) {
//             candidates.push_back(i); // Store indices of valid elements
//         }
//     }

//     // If no elements satisfy the condition, return an empty vector
//     if (candidates.empty()) {
//         return {};
//     }

//     // Step 2: Check if a subset exists with AND = k
//     int currentAnd = -1; // Initialize to all 1s (bitmask)
//     vector<int> resultIndices; // Indices of the forming subset

//     for (int idx : candidates) {
//         if (currentAnd == -1) {
//             currentAnd = arr[idx];
//         } else {
//             currentAnd &= arr[idx];
//         }
//         resultIndices.push_back(idx + 1); // Store 1-based index

//         // If at any point the AND equals k, return the subset indices
//         if (currentAnd == k) {
//             return resultIndices;
//         }
//     }

//     // If no subset produces AND = k, return an empty vector
//     return {};
// }

// int main() {
//     int t; cin>>t;
//     while(t--){
//         int n, k;
//         cin >> n >> k;
//         vector<int> arr(n);

//         // Input array
//         for (int i = 0; i < n; ++i) {
//             cin >> arr[i];
//         }

//         // Get the subset indices
//         vector<int> result = findSubsetIndicesWithAndEqualK(arr, k);

//         if (!result.empty()) {
//             cout << "YES" << endl;
//             for (int idx : result) {
//                 cout << idx << " "; // Print indices of the subset
//             }
//             cout << endl;
//         } else {
//             cout << "NO" << endl;
//         }

//     }

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

vector<int> findSubsetIndicesWithAndEqualK(const vector<int>& arr, int k) {
    vector<int> candidates;

    // Step 1: Filter elements that can contribute to a valid subset
    for (int i = 0; i < arr.size(); ++i) {
        if ((arr[i] & k) == k) {
            candidates.push_back(i); // Store indices of valid elements
        }
    }

    // If no elements satisfy the condition, return an empty vector
    if (candidates.empty()) {
        return {};
    }

    // Step 2: Check if a subset exists with AND = k
    int currentAnd = -1; // Initialize to all 1s (bitmask)
    vector<int> resultIndices; // Indices of the forming subset

    // Check combinations of candidates to find a valid subset
    for (int idx : candidates) {
        if (currentAnd == -1) {
            currentAnd = arr[idx];
        } else {
            currentAnd &= arr[idx];
        }
        resultIndices.push_back(idx + 1); // Store 1-based index

        // If at any point the AND equals k, return the subset indices
        if (currentAnd == k) {
            return resultIndices;
        }
    }

    // If no subset produces AND = k, return an empty vector
    return {};
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    // Input array
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Get the subset indices
    vector<int> result = findSubsetIndicesWithAndEqualK(arr, k);

    if (!result.empty()) {
        cout << "YES" << endl;
        for (int idx : result) {
            cout << idx << " "; // Print indices of the subset
        }
        cout << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
