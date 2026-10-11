


#include <iostream>
#include <set>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> s;
        for(int x : nums){
            s.insert(x);
        }

        if(nums.size() == s.size()){
            return false;
        }

        return true;


    }
};