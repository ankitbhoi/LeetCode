class Solution {
public:
    int mint(int row,int col,int n,vector<vector<int>>&dp,vector<vector<int>>& matrix){
        if(row>=n || col>=n || col<0){
            return 10000000;
        }
        
        if(row==n-1 ){
            return matrix[row][col];
        }
        
        if(dp[row][col]!=-1){
            return dp[row][col];
        }
        
        int leftdiagonal = matrix[row][col] + mint(row+1,col-1,n,dp,matrix);
        int down= matrix[row][col] + mint(row+1,col,n,dp,matrix);
        int rightdiagonal= matrix[row][col] + mint(row+1,col+1,n,dp,matrix);
        
        return dp[row][col]=min({leftdiagonal,down,rightdiagonal});
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            ans=min(ans,mint(0,i,n,dp,matrix));
        }
        return ans;
    }
};