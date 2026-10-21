class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size() - 1;
        vector<int> pM(n+1,0);
        vector<int> sM(n+1,0);
        int total = 0;

        for(int i = 0; i<=n; i++){
            if(i==0){
                pM[i] = height[i];
            }else{
                pM[i] = max(pM[i-1], height[i]);
            }
        }
        for(int i = n; i>=0; i--){
            if(i==n){
                sM[i] = height[i];
            }else{
                sM[i] = max(sM[i+1], height[i]);
            }
        }
        for(int i =0; i<=n; i++){
            total += min(pM[i],sM[i]) - height[i];
        }

        return total;
    }
};