class Solution {
public:
    int uniqueP(int row,int col,int m,int n,vector<vector<int>>&dp){
        if(row>=m || col>=n){
            return 0;
        }
        
        if(row==m-1 && col==n-1){
            return 1;
        }
        
        if(dp[row][col]!=-1){
            return dp[row][col];
        }
        
        int down=uniqueP(row+1,col,m,n,dp);
        int right=uniqueP(row,col+1,m,n,dp);
        
        return dp[row][col]=down+right;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return uniqueP(0,0,m,n,dp);
    }
};