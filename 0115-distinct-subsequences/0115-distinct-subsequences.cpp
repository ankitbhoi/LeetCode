class Solution {
public:
    int dp[1001][1001];
    string S;
    string T;
    int numDistinc(int ind1,int ind2){
        if(ind2==T.size()){
            return 1;
        }
        
        if(ind1==S.size()){
            return 0;
        }
        
        if(dp[ind1][ind2]!=-1){
            return dp[ind1][ind2];
        }
        
        if(S[ind1]==T[ind2]){
            int pick1 = numDistinc(ind1+1,ind2+1);
            int pick2 = numDistinc(ind1+1,ind2);
            
            return dp[ind1][ind2] = pick1+pick2;
        }
        else{
            return dp[ind1][ind2] = numDistinc(ind1+1,ind2);
        }
        
    }
    int numDistinct(string s, string t) {
        S=s;
        T=t;
        
        memset(dp,-1,sizeof(dp));
        
        return numDistinc(0,0);
    }
};