class Solution {
public:
    vector<vector<int>>ans;
    void perm(int ind,vector<int>&ds,vector<int>&nums,int freq[]){
        if(ind==nums.size()){
            ans.push_back(ds);
            return;
        }
        
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){   //if no element is taken or marked in freq array
                ds.push_back(nums[i]);
                freq[i]=1;
                perm(ind+1,ds,nums,freq);
                ds.pop_back();
                freq[i]=0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>ds;
        // int s=nums.size();
        // int freq[s]={0};
        int freq[6]={0};
        // int freq[nums.size()];
        // for(int i=0;i<nums.size();i++){
        //     freq[i]=0;
        // }
        perm(0,ds,nums,freq);
        return ans;
    }
};