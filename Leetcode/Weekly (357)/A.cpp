class Solution {
public:
    string finalString(string s) {
        for (int i = 0 ; i < s.size(); i++) {
            if (s[i] == 'i') {
                reverse(s.begin(), s.begin() + i);
                s.erase(i, 1); // as the size gets updated hence i-- is updated.
                i--;
            }
        }

        return s;
    }
};