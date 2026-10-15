class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       if(nums.size() == 0){
        return 0;
       }else if(nums.size() == 1){
        return 1;
       }else{
        int i = 0;
        int j = 1;

        while(i<=nums.size()-1 && j<= nums.size()-1){
            if(nums[i] != nums[j]){
                nums[i+1] = nums[j];
                i++;
                j++;
            }else{
                j++;
            }
        }
        return i+1;
       }

       


       
       
        
    }
};