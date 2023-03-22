class Solution {
public:
    void paren(int oc,int cc,string ds,int n,vector<string> &ans){
        if(oc==n && cc==n){
            // print ds;
            ans.push_back(ds);
            return;
        }
        if(oc<n){
            paren(oc+1,cc,ds+"(",n,ans);
        }
        if(cc<oc){
            paren(oc,cc+1,ds+")",n,ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        paren(0,0,"",n,ans);
        return ans;
    }
};