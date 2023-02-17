class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> v;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]!=nums[i+1]){
                v.push_back(nums[i]);
            }
        }
        v.push_back(nums[nums.size()-1]);
        for(int i=0;i<v.size();i++){
            nums[i]=v[i];
        }
        
        return v.size();
    }
};