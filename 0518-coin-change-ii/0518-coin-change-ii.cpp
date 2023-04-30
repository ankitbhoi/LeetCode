class Solution {
public:
    int Change(int ind,int amount,vector<vector<int>>&dp,vector<int>&coins){
        if(ind==coins.size()){
            if(amount==0){
                return 1;
            }
            else{
                return 0;
            }
        }
        
        if(dp[ind][amount]!=-1){
            return dp[ind][amount];
        }
        
        int pick=0;
        if(coins[ind]<=amount){
            pick=Change(ind,amount-coins[ind],dp,coins);
        }
        
        int notpick=Change(ind+1,amount,dp,coins);
        
        return dp[ind][amount]=pick+notpick;
    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>>dp(301,vector<int>(5001,-1));
        return Change(0,amount,dp,coins);
    }
};