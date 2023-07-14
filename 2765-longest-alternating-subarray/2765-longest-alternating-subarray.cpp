class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int currLen = 1;
            int add = 1;
            int next = nums[i];
            for(int j=i+1;j<n;j++){
                next += add;
                if(nums[j] == next){
                    currLen++;
                }else{
                    break;
                }
                add *= (-1);
            }
            ans = max(ans, currLen);
        }
        return ans==1?-1:ans;
    }
};