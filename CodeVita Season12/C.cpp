// #include <iostream>
// #include <vector>
// #include <string>
// #include <unordered_map>
// #include <climits>
// using namespace std;

// int calculateDeletions(const string &substring, const string &main_string, int start) {
//     unordered_map<char, int> freq;
//     for (char ch : substring) freq[ch]++;
    
//     int deletions = 0;
//     for (int i = 0; i < substring.size() && start + i < main_string.size(); i++) {
//         char main_char = main_string[start + i];
//         if (freq[main_char] > 0) {
//             freq[main_char]--;
//         } else {
//             deletions++;
//         }
//     }
//     return deletions;
// }

// int main() {
//     int N, K;
//     cin >> N;
//     vector<string> substrings(N);
//     for (int i = 0; i < N; i++) {
//         cin >> substrings[i];
//     }
//     string main_string;
//     cin >> main_string;
//     cin >> K;

//     int main_length = main_string.size();
//     vector<int> dp(main_length + 1, INT_MAX); 
//     dp[0] = 0; 

//     for (int i = 0; i < main_length; i++) {
//         if (dp[i] == INT_MAX) continue; 
//         for (const string &substring : substrings) {
//             if (i + substring.size() > main_length) continue;
//             int deletions = calculateDeletions(substring, main_string, i);
//             dp[i + substring.size()] = min(dp[i + substring.size()], dp[i] + deletions);
//         }
//     }

//     if (dp[main_length] <= K) {
//         cout << "Possible" << endl;
//         return 0;
//     }

//     string result;
//     for (int i = 1; i <= main_length; i++) {
//         if (dp[i] <= K) {
//             result = main_string.substr(0, i);
//         } else {
//             break;
//         }
//     }

//     if (!result.empty()) {
//         cout << result << endl;
//     } else {
//         bool impossible = true;
//         for (int i = 0; i < main_length; i++) {
//             for (const string &substring : substrings) {
//                 if (substring.find(main_string[i]) != string::npos) {
//                     impossible = false;
//                     break;
//                 }
//             }
//         }
//         if (impossible) {
//             cout << "Impossible" << endl;
//         } else {
//             cout << "Nothing" << endl;
//         }
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <climits>
using namespace std;

// Helper function to calculate deletions needed
int calculateDeletions(const string &substring, const string &main_string, size_t start) {
    unordered_map<char, int> freq;
    for (char ch : substring) freq[ch]++;
    
    int deletions = 0;
    for (size_t i = 0; i < substring.size() && start + i < main_string.size(); i++) {
        char main_char = main_string[start + i];
        if (freq[main_char] > 0) {
            freq[main_char]--;
        } else {
            deletions++;
        }
    }
    return deletions;
}

int main() {
    int N, K;
    cin >> N;
    vector<string> substrings(N);
    for (int i = 0; i < N; i++) {
        cin >> substrings[i];
    }
    string main_string;
    cin >> main_string;
    cin >> K;

    size_t main_length = main_string.size();
    vector<int> dp(main_length + 1, INT_MAX); // dp[i] = min deletions to form first i characters
    dp[0] = 0; // Base case: no deletions needed for an empty string

    for (size_t i = 0; i < main_length; i++) {
        if (dp[i] == INT_MAX) continue; // Skip unreachable states
        for (const string &substring : substrings) {
            if (i + substring.size() > main_length) continue;
            int deletions = calculateDeletions(substring, main_string, i);
            dp[i + substring.size()] = min(dp[i + substring.size()], dp[i] + deletions);
        }
    }

    if (dp[main_length] <= K) {
        cout << "Possible" << endl;
        return 0;
    }

    // Find the maximum prefix that can be formed within K deletions
    string result;
    for (size_t i = 1; i <= main_length; i++) {
        if (dp[i] <= K) {
            result = main_string.substr(0, i);
        } else {
            break;
        }
    }

    if (!result.empty()) {
        cout << result << endl;
    } else {
        // Check if forming any part is impossible
        bool impossible = true;
        for (size_t i = 0; i < main_length; i++) {
            for (const string &substring : substrings) {
                if (substring.find(main_string[i]) != string::npos) {
                    impossible = false;
                    break;
                }
            }
        }
        if (impossible) {
            cout << "Impossible" << endl;
        } else {
            cout << "Nothing" << endl;
        }
    }

    return 0;
}
