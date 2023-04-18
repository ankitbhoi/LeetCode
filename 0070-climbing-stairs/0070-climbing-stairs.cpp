class Solution {
public:
    int climbWays(int ind,vector<int>&dp,int n){
        if(ind==n){
            return 1;
        }
        if(ind==n-1){
            return 1;
        }
        if(dp[ind]!=-1) return dp[ind];
        return dp[ind]=climbWays(ind+1,dp,n)+climbWays(ind+2,dp,n);
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return climbWays(0,dp,n);
    }
};