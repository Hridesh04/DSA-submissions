class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int sum = 0;
        for (int weight : weights) {
            sum += weight;
        }

        int low = *max_element(weights.begin(), weights.end());
        int high = sum;
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (canFinish(weights, days, mid)) {
                ans = mid;
                high = mid - 1;  // Try a smaller capacity
            } else {
                low = mid + 1;   // Need a larger capacity
            }
        }

        return ans;
    }

private:
    bool canFinish(const vector<int>& weights, int days, int capacity) {
        int currentLoad = 0;
        int daysUsed = 1;

        for (int weight : weights) {
            if (currentLoad + weight > capacity) {
                daysUsed++;
                currentLoad = 0;
            }

            currentLoad += weight;

            if (daysUsed > days) {
                return false;
            }
        }

        return true;
    }
};