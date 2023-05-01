class Solution {
public:
    int dp[1001][1001];
    string txt1,txt2;
    int subsequence(int ind1,int ind2){
        if(ind1==txt1.size() || ind2==txt2.size()){
            return 0;
        }
        
        if(dp[ind1][ind2]!=-1){
            return dp[ind1][ind2];
        }
        
        if(txt1[ind1]==txt2[ind2]){
            return dp[ind1][ind2]= 1 + subsequence(ind1+1,ind2+1);
        }
        else{
            return dp[ind1][ind2]=max(subsequence(ind1+1,ind2),subsequence(ind1,ind2+1));
        }
    }
                                   
    int longestCommonSubsequence(string text1, string text2) {
        txt1=text1;
        txt2=text2;
        
        memset(dp,-1,sizeof(dp));
        
        return subsequence(0,0);
    }
};