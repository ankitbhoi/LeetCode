class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int localSum=0;
        int sum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            localSum+=nums[i];
            if(sum<localSum){
                sum=localSum;
            }
            if(localSum<0){
                localSum=0;
            } 
        }
        return sum;
    }
};