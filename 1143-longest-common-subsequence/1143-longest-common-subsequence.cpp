class Solution {
public:
    int subsequence(int ind1,int ind2,vector<vector<int>>&dp,string &text1,string &text2){
        if(ind1>=text1.size() || ind2>=text2.size()){
            return 0;
        }
        
        if(dp[ind1][ind2]!=-1){
            return dp[ind1][ind2];
        }
        
        if(text1[ind1]==text2[ind2]){
            return dp[ind1][ind2]= 1 + subsequence(ind1+1,ind2+1,dp,text1,text2);
        }
        else{
            return dp[ind1][ind2]= max(subsequence(ind1+1,ind2,dp,text1,text2),subsequence(ind1,ind2+1,dp,text1,text2));
        }
        
    }
                                   
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>>dp(1001,vector<int>(1001,-1));
        return subsequence(0,0,dp,text1,text2);
    }
};