class Solution {
public:
    vector<vector<int>>ans;
    void subset(int ind,vector<int>&ds,vector<int>&nums,int N){
        ans.push_back(ds);
        for(int i=ind;i<nums.size();i++){
            if(i!=ind && nums[i]==nums[i-1]){
                continue;
            }
            ds.push_back(nums[i]);
            subset(i+1,ds,nums,N);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>ds;
        sort(nums.begin(),nums.end());
        subset(0,ds,nums,nums.size());
        return ans;
    }
};


/*
1 2 "2" 2 3 3
0 1 "2" 3 4 5

not pick condition in first if statement
for loop is being used to iterate over all the elements like choose every element for recursion call

now if my "i" is the starting index then we shouldn't impose any restriction
but if i!=ind think like 2 is the element we are talking about we already have [12] but now we will insert 2 of index 2 for the first time in our array which is ok. kaise check krhe hai? ki 2 se hi suru horha hai and 2 ke hi equal hai
ab agr phirse 2 ata hai jo 3rd index pe hai and wo tmhare initial 2 k equal hua to usko pick nai krhe hai.
and aur ek comparison v horha hai ki dono elements similar nai hone chaiye.
*/

// one more type of solution using sets
// class Solution {
//   public:
//     void fun(vector < int > & nums, int index, vector < int > ds, set < vector < int >> & res) {
//       if (index == nums.size()) {
//         sort(ds.begin(), ds.end());
//         res.insert(ds);
//         return;
//       }
//       ds.push_back(nums[index]);
//       fun(nums, index + 1, ds, res);
//       ds.pop_back();
//       fun(nums, index + 1, ds, res);
//     }
//   vector < vector < int >> subsetsWithDup(vector < int > & nums) {
//     vector < vector < int >> ans;
//     set < vector < int >> res;
//     vector < int > ds;
//     fun(nums, 0, ds, res);
//     for (auto it = res.begin(); it != res.end(); it++) {
//       ans.push_back( * it);
//     }
//     return ans;
//   }
// };