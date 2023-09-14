class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        set<int>st;
        
        int row=nums.size();
        
        for(int i=0;i<row;i++){
            for(int j=nums[i][0];j<=nums[i][1];j++){
                st.insert(j);
            }
        }
        
        return st.size();
    }
};