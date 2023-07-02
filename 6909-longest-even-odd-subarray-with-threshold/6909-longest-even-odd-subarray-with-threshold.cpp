class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int length=0;
        int curr=1;
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]%2==0 && nums[i]<=threshold && length==0){
                length=1;
            }
            
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]%2==0 && nums[j]%2!=nums[j-1]%2 && nums[j]<=threshold && nums[i]<=threshold){
                    curr++;
                    length=max(length,curr);
                }
                else{
                    break;
                }
            }
            curr=1;
        }
        
        return length;
    }
};