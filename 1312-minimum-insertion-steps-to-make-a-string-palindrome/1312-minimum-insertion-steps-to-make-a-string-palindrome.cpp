class Solution {
public:
    int minInsertions(string s) {
        
        string original=s;
        reverse(s.begin(),s.end());
        string rev=s;
        s=original;
        int n=s.size();
        int m=rev.size();
        
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        for(int i=0;i<n;i++){
            dp[i][0]=0;
        }
        for(int i=0;i<m;i++){
            dp[0][i]=0;
        }
        
        for(int ind1=1;ind1<=n;ind1++){
            for(int ind2=1;ind2<=m;ind2++){
                if(s[ind1-1]==rev[ind2-1]){
                    dp[ind1][ind2]=1+dp[ind1-1][ind2-1];
                }
                else{
                    dp[ind1][ind2]=max(dp[ind1-1][ind2],dp[ind1][ind2-1]);
                }
            }
        }
        int ans=n-dp[n][m];
        return ans;
    }
};