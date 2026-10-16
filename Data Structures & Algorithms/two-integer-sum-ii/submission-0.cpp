#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        unordered_map<int, int> mp;  // value -> index

        for (int i = 0; i < numbers.size(); i++) {

            int required = target - numbers[i];

            if (mp.find(required) != mp.end()) {
                return {mp[required] +1, i +1};
            }

            mp[numbers[i]] = i;
        }

        return {};
    }
};