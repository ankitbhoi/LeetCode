class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        // vector<int> a;
        vector<vector<int>> b;
        int j,k;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            
             j=i+1;
             k=nums.size()-1;
             while(j<k){
                 int sum=nums[i]+nums[j]+nums[k];
                 if(sum==0){
                      // a.push_back(nums[i]);
                      // a.push_back(nums[j]);
                      // a.push_back(nums[k]);
                      // if(find(b.begin(),b.end(),a)==b.end())
                      //     b.push_back(a);
                      // a.clear();
                      b.push_back({nums[i],nums[j],nums[k]});
                      j++;
                      k--;
                     
                     while (j < k && nums[j] == nums[j - 1])
                        j++;
                     while (j < k && nums[k] == nums[k + 1])
                        k--;
                 }
                 else if(sum<0)
                     j++;
                 else
                     k--;
                 // sum=0;
             }
        }
        return b;
    }
 };