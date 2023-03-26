class Solution {
public:
    vector<vector<int>>ans;
    void power(int ind,vector<int>&subAns,vector<int>&nums,int n){
        if(ind==n){
            ans.push_back(subAns);
            return;
        }
        subAns.push_back(nums[ind]);
        power(ind+1,subAns,nums,n);
        
        subAns.pop_back();
        power(ind+1,subAns,nums,n);
        
        
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int>subAns;
        power(0,subAns,nums,n);
        return ans;
    }
};