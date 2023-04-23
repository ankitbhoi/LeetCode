class Solution {
public:
    int coinchange(int ind,int amount,vector<vector<int>>&dp,vector<int>&coins){
        if(ind==coins.size()){
            if(amount==0){
                return 0;
            }
            else{
                return 10000000;
            }
        }
        
        if(dp[ind][amount]!=-1){
            return dp[ind][amount];
        }
        
        int pick=INT_MAX;
        int pick2=INT_MAX;
        if(coins[ind]<=amount){
            pick= 1 + coinchange(ind+1,amount-coins[ind],dp,coins);
            pick2= 1 + coinchange(ind,amount-coins[ind],dp,coins);
        }
        
        int notpick = coinchange(ind+1,amount,dp,coins);
        
        return dp[ind][amount]=min({pick,pick2,notpick});
    }
    
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
        int ans=coinchange(0,amount,dp,coins);
        if(ans>=10000000){
            return -1;
        }
        else{
            return ans;
        }
    }
};