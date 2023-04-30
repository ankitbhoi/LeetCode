class Solution {
public:
int T;
    int findtargets(int ind,vector<vector<int>>&dp,vector<int>&nums,int target){
        if(ind==nums.size()){
            if(target==T){
                return 1;
            }
            else{
                return 0;
            }
        }
        
        if(dp[ind][target+1000]!=-1){
            return dp[ind][target+1000];
        }
        
        int positive=0;
        int negative=0;
            positive =  findtargets(ind+1,dp,nums,target+nums[ind]);
            negative =  findtargets(ind+1,dp,nums,target-nums[ind]);
        
        return dp[ind][target+1000]=(positive+negative);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        T = target; 
        vector<vector<int>>dp(nums.size(),vector<int>(target+2005,-1));
        return findtargets(0,dp,nums,0);
    }
};