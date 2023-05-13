class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int rows=nums.size();
        int cols=nums[0].size();
        int ans=0;
        
        for(int i=0;i<rows;i++){
            sort(nums[i].begin(),nums[i].end());
        }
        for(int i=0;i<cols;i++){
            int maxi=0;
            for(int j=0;j<rows;j++){
                maxi=max(maxi,nums[j][i]);
            }
            ans=ans+maxi;
        }
        
        return ans;
    }
};