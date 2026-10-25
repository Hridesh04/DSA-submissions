class Solution {
public:
    int characterReplacement(string s, int k) {
        int hash[26] = {};
        int l = 0, r = 0, maxlen = 0, maxf = 0;

        while (r < s.size()) {
            hash[s[r] - 'A']++;
            maxf = max(maxf, hash[s[r] - 'A']);

            while ((r - l + 1) - maxf > k) {
                // Remove the leftmost character.
                hash[s[l] - 'A']--;
                l++;

                // Recalculate the highest frequency.
                maxf = 0;
                for (int i = 0; i < 26; i++) {
                    maxf = max(maxf, hash[i]);
                }
            }

            maxlen = max(maxlen, r - l + 1);
            r++;
        }

        return maxlen;
    }
};