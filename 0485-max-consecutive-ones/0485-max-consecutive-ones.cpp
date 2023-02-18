class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int globalcount=0;
        int localcount=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                localcount++;
                if(globalcount<localcount){
                    globalcount=localcount;
                }
            }
            else{
                localcount=0;
            }
        }
        return globalcount;
    }
};