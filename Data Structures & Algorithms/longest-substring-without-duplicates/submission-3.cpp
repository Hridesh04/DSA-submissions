class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int r=0, l=0 , maxlen =0;
        int n = s.size();
        int len = 0;
        int hash[256];
        std::fill(hash, hash + 256, -1);
        
        while(r<n){
            if(hash[s[r]] != -1){
                if(hash[s[r]] >= l){
                    l = hash[s[r]] + 1;
                }
            }

            len = r-l+1;
            maxlen = max(len, maxlen);

            hash[s[r]] = r;
            r++;

        }

        return maxlen;
    }
};
