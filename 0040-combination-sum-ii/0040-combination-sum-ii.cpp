class Solution {
public:
    vector<vector<int>> c;
    vector<int> b;
    vector<vector<int>>combinationSum2(vector<int>& candidates, int target) {
            sort(candidates.begin(),candidates.end());
           solve(candidates,target,0,b);
           return c;
        }
        void solve(vector<int>& a, int target,int id,vector<int>& b)
        {
            if(target==0)
            {
                sort(b.begin(),b.end());
                if(find(c.begin(),c.end(),b)==c.end())
                   c.push_back(b);
                return;
                // c.push_back(b);
                // return;
            }
            // if(target<0)
            //     return;
            for(int i=id;i<a.size();i++){
                if (i>id && a[i] == a[i - 1]){
                    continue;
                } 
                if(a[i]<=target){
                    b.push_back(a[i]);
                    solve(a,target-a[i],i+1,b);
                    b.pop_back();
                }
            }
        }
};