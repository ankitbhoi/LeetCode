//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    public:
    long long countt(int ind,int coins[],vector<vector<long long int>>&dp,int sum,int N){
        if(ind==0){
            return (sum%coins[ind]==0);
        }
        if(dp[ind][sum]!=-1){
            return dp[ind][sum];
        }
        
        long long int notpick = countt(ind-1,coins,dp,sum,N);
        
        long long int pick=0;
        if(coins[ind]<=sum){
            pick=countt(ind,coins,dp,sum-coins[ind],N);
        }
        
        
        
        return dp[ind][sum]=pick+notpick;
    }


    long long int count(int coins[], int N, int sum) {
        vector<vector<long long int>>dp(N,vector<long long int>(sum+1,-1));
        return countt(N-1,coins,dp,sum,N);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends