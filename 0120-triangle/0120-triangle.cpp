class Solution {
public:
    int mint(int row,int col,int n,vector<vector<int>>&dp,vector<vector<int>>& triangle){
        if(row>=n || col>=n){
            return 0;
        }
        
        if(row==n-1){
            return triangle[row][col];
        }
        
        if(dp[row][col]!=-1){
            return dp[row][col];
        }
        
        int down= triangle[row][col] + mint(row+1,col,n,dp,triangle);
        int diagonal= triangle[row][col] + mint(row+1,col+1,n,dp,triangle);
        
        return dp[row][col]= min(down,diagonal);
    }
    
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return mint(0,0,n,dp,triangle);
    }
};