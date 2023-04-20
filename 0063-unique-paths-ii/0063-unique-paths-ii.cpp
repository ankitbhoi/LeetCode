class Solution {
public:
    int uniqueP(int row,int col,int m,int n,vector<vector<int>>&dp,vector<vector<int>>&Grid){
        if(row>=m || col>=n){
            return 0;
        }
        
        if(Grid[row][col]==1){
            return 0;
        }
        
        if(row==m-1 && col==n-1){
            return 1;
        }
        
        if(dp[row][col]!=-1){
            return dp[row][col];
        }
        
        int down=uniqueP(row+1,col,m,n,dp,Grid);
        int right=uniqueP(row,col+1,m,n,dp,Grid);
        
        return dp[row][col]=down+right;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return uniqueP(0,0,m,n,dp,obstacleGrid);
    }
};