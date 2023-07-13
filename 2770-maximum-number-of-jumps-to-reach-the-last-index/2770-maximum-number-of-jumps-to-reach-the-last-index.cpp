class Solution {
public:
    int maximumJump(int ind,vector<int>& nums,vector<int>& dp,int target){
        if(ind==nums.size()-1){
            return 0;
        }
        if(dp[ind]!=-1){
            return dp[ind];
        }
        int count=INT_MIN;
        for(int i=ind+1;i<nums.size();i++){
            if(abs(nums[i]-nums[ind])<=target){
                count= max(count,1+maximumJump(i,nums,dp,target));
            }
        }
        return dp[ind]=count;
    }
    int maximumJumps(vector<int>& nums, int target) {
        vector<int>dp(nums.size(),-1);
        int ans=maximumJump(0,nums,dp,target);
        if(ans>0){
            return ans;
        }
        else{
            return -1;
        } 
        
    }
};