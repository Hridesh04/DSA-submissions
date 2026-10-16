class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size()-1;
        int water = 0;

        while(i<=j){
            int h = min(heights[i],heights[j]);
            int w = j-i;

            int temp = h*w;

            water = max(temp,water);

            if(heights[i]<=heights[j]){
                i++;
            }else{
                j--;
            }

        }
        return water;
    }
};
