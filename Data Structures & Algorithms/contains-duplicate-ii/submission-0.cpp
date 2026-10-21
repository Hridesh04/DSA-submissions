class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> lastIndex;

        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];

            if (lastIndex.count(num) > 0) {
                if (i - lastIndex[num] <= k) {
                    return true;
                }
            }

            lastIndex[num] = i;
        }

        return false;
    }
};