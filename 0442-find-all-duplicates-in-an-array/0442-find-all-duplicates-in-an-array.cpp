class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int s=0;
        for(int i=1;i<nums.size();i++){
            if(!(nums[s]^nums[i])){
                ans.push_back(nums[i]);
                s++;
            }
            else{
                s=i;
            }
        }
        return ans;
    }
};