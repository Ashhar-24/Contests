class Solution {
public:
    string sortVowels(string s) {
        int n = s.size();
        vector<char>vowels;
        vector<int>index;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                vowels.push_back(s[i]);
                index.push_back(i);
            }
        }

        sort(vowels.begin(), vowels.end());
        int i = 0;
        for (auto x : index) {
            s[x] = vowels[i];
            i++;
        }
        return s;
    }
};

/* Given a string, keeping the consonants constant, arrange the vowels present in ascending order of
   of ASCII value. eg: lEetcOde => lEOtcede
*/