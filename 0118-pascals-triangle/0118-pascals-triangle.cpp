class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
        
        for(int row=0;row<numRows;row++){
            ans[row].resize(row+1);
            ans[row][0]=ans[row][row]=1;
            
            for(int col=1;col<row;col++){
                ans[row][col]=ans[row-1][col-1]+ans[row-1][col];
            }
        }
        return ans;
    }
};