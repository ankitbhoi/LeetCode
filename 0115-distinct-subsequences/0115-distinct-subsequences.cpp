class Solution {
public:
    int numDistinct(string s, string t) {
        unsigned long long n=s.size();
        unsigned long long m=t.size();
        vector<vector<unsigned long long>> dp(n+1,vector<unsigned long long>(m+1,0));
    
    for(unsigned long long i=0;i<n+1;i++){
        dp[i][0]=1;
    }
    for(unsigned long long i=1;i<m+1;i++){
        dp[0][i]=0;
    }
    
    for(unsigned long long i=1;i<n+1;i++){
        for(unsigned long long j=1;j<m+1;j++){
            
            if(s[i-1]==t[j-1])
                dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]);
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    
    
    return dp[n][m];
    }
};
// memoization:-
// class Solution {
// public:
//     int dp[1001][1001];
//     string S;
//     string T;
//     int numDistinc(int ind1,int ind2){
//         if(ind2==T.size()){
//             return 1;
//         }
        
//         if(ind1==S.size()){
//             return 0;
//         }
        
//         if(dp[ind1][ind2]!=-1){
//             return dp[ind1][ind2];
//         }
        
//         if(S[ind1]==T[ind2]){
//             int pick1 = numDistinc(ind1+1,ind2+1);
//             int pick2 = numDistinc(ind1+1,ind2);
            
//             return dp[ind1][ind2] = pick1+pick2;
//         }
//         else{
//             return dp[ind1][ind2] = numDistinc(ind1+1,ind2);
//         }
        
//     }
//     int numDistinct(string s, string t) {
//         S=s;
//         T=t;
        
//         memset(dp,-1,sizeof(dp));
        
//         return numDistinc(0,0);
//     }
// };