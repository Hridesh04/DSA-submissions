class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (canFinish(piles, h, mid)) {
                ans = mid;          // mid works, try smaller speed
                high = mid - 1;
            } else {
                low = mid + 1;      // too slow, need higher speed
            }
        }

        return ans;
    }

private:
    bool canFinish(vector<int>& piles, int h, int speed) {
        long long hours = 0;

        for (int pile : piles) {
            // Ceiling division: ceil(pile / speed)
            hours += (pile + speed - 1) / speed;

            if (hours > h) return false; // early exit
        }

        return hours <= h;
    }
};