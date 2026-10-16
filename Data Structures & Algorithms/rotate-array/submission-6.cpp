class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int l = nums.size();
        if (l == 0) return;

        k %= l;

        vector<int> mirror(2 * l);

        for (int i = 0; i < l; i++) {
            mirror[i] = nums[i];
            mirror[i + l] = nums[i];
        }

        int start = l - k;

        for (int i = 0; i < l; i++) {
            nums[i] = mirror[start + i];
        }
    }
};