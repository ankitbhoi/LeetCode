class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int j=0;
        vector<int> b;
        for(int i=j+1;i<nums.size();i++)
        {
            if((nums[j]+nums[i])==target)
            {
                b.push_back(min(i,j));
                b.push_back(max(i,j));
                break;
            }
            if(i==nums.size()-1)
            {
                j++;
                i=j;
            }
            if(j>nums.size()-2)
               break;
        }
        return b;
    }
};