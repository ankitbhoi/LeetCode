class Solution {
public:
    int findMin(vector<int>& nums) {
        int index=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>nums[(i+1)%nums.size()]){
                index=(i+1)%nums.size();
            }
        }
        
        return nums[index];
    }
};