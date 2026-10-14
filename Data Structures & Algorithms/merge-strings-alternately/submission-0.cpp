#include <string>
using namespace std;



class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0;
        int j = 0;
        string mearged = "";
        while(i< word1.length() && j < word2.length()){
            mearged += word1[i++];
            mearged += word2[j++];
        }

        while(i< word1.length()){
            mearged += word1[i++];
        }

        while(j< word2.length()){
            mearged += word2[j++];
        }

        return mearged;
    }
};