class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        
        int left = 0, right = nums.size() - 1, count = 0;
            
        while (left < right) {
            int sum = nums[left] + nums[right];
            if (sum < target) {
                count += right-left;
                left++;  // Increment left pointer when sum < target
            }
            else {
                right--;
            }
        }
        
        return count;
    }
};
