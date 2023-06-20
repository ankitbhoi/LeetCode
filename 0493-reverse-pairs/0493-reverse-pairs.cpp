class Solution {
public:
    void merge(long long low, long long mid, long long high, vector<int>& nums) {
        vector<int> temp;
        long long left = low;
        long long right = mid + 1;
        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left]);
                left++;
            }
            else {
                temp.push_back(nums[right]);
                right++;
            }
        }
        
        while (left <= mid) {
            temp.push_back(nums[left]);
            left++;
        }
        
        while (right <= high) {
            temp.push_back(nums[right]);
            right++;
        }
        
        for (long long i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        }
    }
    
    long long countPairs(long long low, long long mid, long long high, vector<int>& nums) {
        long long right = mid + 1;
        long long count = 0;
        for (long long i = low; i <= mid; i++) {
            while (right <= high && nums[i] > 2LL * nums[right]) {
                right++;
            }
            count += (right - (mid + 1));
        }
        return count;
    }
    
    long long mergeSort(long long low, long long high, vector<int>& nums) {
        long long count = 0;
        if (low >= high) {
            return count;
        }
        long long mid = low + (high - low) / 2;
        count += mergeSort(low, mid, nums);
        count += mergeSort(mid + 1, high, nums);
        count += countPairs(low, mid, high, nums);
        merge(low, mid, high, nums);
        return count;
    }
    
    int reversePairs(vector<int>& nums) {
        return mergeSort(0, nums.size() - 1, nums);
    }
};
