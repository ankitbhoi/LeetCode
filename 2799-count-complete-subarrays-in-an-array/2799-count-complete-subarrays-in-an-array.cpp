;class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_map<int,int>mp,all;
        for(int i=0;i<nums.size();i++){
            all[nums[i]]++;
        }
        
        int start=0,end=0,count=0;
        while(end<nums.size()){
            mp[nums[end]]++;
            while(start<=end && mp.size()==all.size()){
                if(--mp[nums[start]]==0){
                    mp.erase(nums[start]);
                }
                start++;
                count+=(nums.size()-end);
            }
            end++;
        }
        return count;
    }
};