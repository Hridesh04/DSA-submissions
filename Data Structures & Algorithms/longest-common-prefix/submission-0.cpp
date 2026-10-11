class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string res = "";
        int n = strs[0].size();

        for (int i = 0; i < n; ++i) {
            char c = strs[0][i];
            for (size_t j = 1; j < strs.size(); ++j) {
                // If this string is too short or character doesn't match
                if (i >= strs[j].size() || strs[j][i] != c) {
                    return res;
                }
            }
            res += c;  // append matching character
        }

        return res;
    }
};