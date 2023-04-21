class Solution {
public:
    bool partition(int ind,vector<vector<int>>&dp,vector<int>&nums,int target){
        if(ind==nums.size()){
            if(target==0){
                return true;
            }
            else{
                return false;
            }
        }
        
        if(dp[ind][target]!=-1){
            return dp[ind][target];
        }
        
        bool ans=false;
        if(target-nums[ind]<0){
            ans |= partition(ind+1,dp,nums,target);
        }
        else{
            ans |= partition(ind+1,dp,nums,target-nums[ind]);
            ans |= partition(ind+1,dp,nums,target);
        }
        
        return dp[ind][target]= ans;
        
    
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        
        if(sum%2!=0){
            return false;
        }
        
        int target=sum/2;
        
        vector<vector<int>>dp(nums.size(),vector<int>(target+1,-1));
        return partition(0,dp,nums,target);
    }
};