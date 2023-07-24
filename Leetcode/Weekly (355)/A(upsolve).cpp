class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string>ans;
        string s = "";

        for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j < words[i].size(); j++) {
                if (words[i][j] != separator) {
                    s += words[i][j];
                }
                else {
                    if (s.size() > 0) {         // to avoid an empty string getting into the ans
                        ans.push_back(s);
                        s = "";
                    }

                }
            }
            if (s.size() != 0) {         // this ensures that string after the separator gets into ans
                ans.push_back(s);
                s = "";
            }
        }
        return ans;
    }
};