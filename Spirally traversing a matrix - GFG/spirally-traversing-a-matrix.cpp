//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
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

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends