class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> ans;
        int rowStart=0;
        int colStart=0;
        int rowEnd=matrix.size()-1;
        int colEnd=matrix[0].size()-1;
        while(rowStart<=rowEnd && colStart<=colEnd){
            for(int j=colStart;j<=colEnd;j++){
                ans.push_back(matrix[rowStart][j]);
            }
            rowStart++;
            
            for(int j=rowStart;j<=rowEnd;j++){
                ans.push_back(matrix[j][colEnd]);
            }
            colEnd--;
            
             if (rowStart <= rowEnd) {
                
                for (int j = colEnd; j >= colStart; j --) {
                    ans.push_back(matrix[rowEnd][j]);
                }
            }
            rowEnd--;
            
            if (colStart <= colEnd) {
                // Traver Up
                for (int j = rowEnd; j >= rowStart; j --) {
                    ans.push_back(matrix[j][colStart]);
                }
            }
            colStart++;
        }
        
        return ans;
        
    }
};

