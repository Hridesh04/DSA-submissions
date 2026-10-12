#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixCounts;
        prefixCounts[0] = 1;
        int currSum = 0;
        int ans = 0;

        for (int x : nums) {
            currSum += x;
            if (prefixCounts.find(currSum - k) != prefixCounts.end()) {
                ans += prefixCounts[currSum - k];
            }
            prefixCounts[currSum]++;
        }
        return ans;
    }
};