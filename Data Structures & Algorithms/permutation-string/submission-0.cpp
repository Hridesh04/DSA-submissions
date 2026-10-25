class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l1 = s1.size();
        int l2 = s2.size();
        int i = 0, j = l1-1;

        int hash[26] = {};

        for(int m = 0; m<l1;m++){
            hash[s1[m] - 'a']++;
        }

        while(j<=l2-1){
            int hashTemp[26] = {};
            for(int k=i;k<=j;k++){
                hashTemp[s2[k] - 'a']++;
            }

            if (std::equal(hash, hash + 26, hashTemp)){
                return true;
            }

            i++;
            j++;

        }
        return false;
    }
};
