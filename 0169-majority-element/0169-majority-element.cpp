class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int number=nums[0];
        int count=1;
        int majorityNumber=nums.size()/2;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i]){
                count++;
                if(count>majorityNumber){
                    break;
                }
            }
            else{
                number=nums[i];
                count=1;
            }
        }
        return number;
    }
};