class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int first = -1, last = -1;
        auto lower = lower_bound(nums.begin(), nums.end(), target);
        auto upper = upper_bound(nums.begin(), nums.end(), target);

        if(lower==nums.end() || nums[lower-nums.begin()]!=target){
            ans.push_back(first);
            ans.push_back(last);
            return ans;
        }
        
        ans.push_back(lower-nums.begin());
        ans.push_back(upper-nums.begin()-1);
        return ans;
        
        
    }
};
