class Solution {
public:
    vector<vector<int>>ans;
    void sum(int ind,vector<int>&curAns,vector<int>&candidates,int target){
        if(ind==candidates.size()){
            if(target==0){
                ans.push_back(curAns);
                return;
            }
            return;
        }
        
        if(candidates[ind]<=target){
            curAns.push_back(candidates[ind]);
            sum(ind,curAns,candidates,target-candidates[ind]);
            curAns.pop_back();
        }
        
        sum(ind+1,curAns,candidates,target);
        
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>curAns;
        sum(0,curAns,candidates,target);
        return ans;
    }
};