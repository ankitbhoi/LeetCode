class Solution {
public:
    int longestPalindromeSubseq(string s) {
        
        string original=s;
        reverse(s.begin(),s.end());
        string rev=s;
        s=original;
        
        vector<vector<int>>dp(s.size()+1,vector<int>(rev.size()+1,0));
        
        for(int i=0;i<=s.size();i++){
            dp[i][0]=0;
        }
        
        for(int i=0;i<=rev.size();i++){
            dp[0][i]=0;
        }
        
        for(int ind1=1;ind1<=s.size();ind1++){
            for(int ind2=1;ind2<=rev.size();ind2++){
                if(s[ind1-1]==rev[ind2-1]){
                    dp[ind1][ind2]=1+dp[ind1-1][ind2-1];
                }
                else{
                    dp[ind1][ind2]=max(dp[ind1-1][ind2],dp[ind1][ind2-1]);
                }
            }
        }
        
        return dp[s.size()][rev.size()];
    }
};