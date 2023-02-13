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





























// vector<int> ans;

//         int row=matrix.size();
//         int col=matrix[0].size();

//         int startingRow=0;
//         int startingCol=0;
//         int endingCol=col-1;
//         int endingRow=row-1;

//         int count=0;
//         int total=row*col;

//         while(count<total){
//             for(int index=startingCol;count<total && index<=endingCol;index++){
//                 ans.push_back(matrix[startingRow][index]);
//                 count++;
//             }
//             startingRow++;

//             for(int index=startingRow;count<total && index<=endingRow;index++){
//                 ans.push_back(matrix[index][endingCol]);
//                 count++;
//             }
//             endingCol--;

//             for(int index=endingCol;count<total && index>=startingCol;index--){
//                 ans.push_back(matrix[endingRow][index]);
//                 count++;
//             }
//             endingRow--;

//             for(int index=endingRow;count<total && index>=startingRow;index--){
//                 ans.push_back(matrix[index][startingCol]);
//                 count++;
//             }
//             startingCol++;
//         }
//         return ans;
