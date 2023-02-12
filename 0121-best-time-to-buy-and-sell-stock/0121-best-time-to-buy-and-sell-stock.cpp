class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int buy=nums[0];
        int profit=0;
        for(int i=1;i<nums.size();i++){
            if(buy>nums[i]){
                buy=nums[i];
            }
            else if(profit<nums[i]-buy){
                profit=nums[i]-buy;
            }
        }
        return profit;
    }
};