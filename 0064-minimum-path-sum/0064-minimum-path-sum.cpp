class Solution {
public:
    int minPath(int row,int col,int m,int n,vector<vector<int>>&dp,vector<vector<int>>&grid){
        
        if(row>=m || col>=n){
            return 40000;
        }
        
        if(row==m-1 && col==n-1){
            return grid[row][col];
        }
        
        if(dp[row][col]!=-1){
            return dp[row][col];
        }
        
        int right = grid[row][col] + minPath(row,col+1,m,n,dp,grid);
        int down = grid[row][col]+ minPath(row+1,col,m,n,dp,grid);
        
        return dp[row][col] = min(right,down);
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return minPath(0,0,m,n,dp,grid);
    }
};