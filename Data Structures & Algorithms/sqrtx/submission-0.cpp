class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) return 0;
        
        int st = 1;
        int end = x;
        
        while (st <= end) {
            int mid = st + (end - st) / 2;
            
            // Using division to prevent overflow instead of mid * mid
            if (mid == x / mid) {
                return mid;
            }
            else if (mid < x / mid) {
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return end;
    }
};