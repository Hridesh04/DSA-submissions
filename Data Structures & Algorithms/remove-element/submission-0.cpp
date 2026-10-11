class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // writer index
        for (int x : nums) {
            if (x != val) {
                nums[k++] = x;
            }
        }
        return k;
    }
};