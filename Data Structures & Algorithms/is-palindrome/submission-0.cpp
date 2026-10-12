class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = "";
        for (char c : s) {
            if (isalnum(c)) {
                cleaned += tolower(c);
            }
        }
        s = cleaned;
        string t = s;
        int i = 0;
        int j = s.length()-1;

        while(i<=j){
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;

            i++;
            j--;
        }

        if(t == s){
            return true;
        }else{
            return false;
        }

    }
};
