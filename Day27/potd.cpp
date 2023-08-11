#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long int solve(int coins[],int n,int sum,vector<vector<long long int>>&dp)
    {
        if(n==0)
        {
            if(sum%coins[0]==0) return 1;
            return 0;
        }
        if(sum < 0)
        {
            return 0;
        }
        if(sum==0)
        {
            return 1;
        }
        if(dp[n][sum]!=-1)
        {
            return dp[n][sum];
        }
        long long int notake = solve(coins,n-1,sum,dp);
        long long int take = 0;
        if(coins[n]<=sum) take = solve(coins,n,sum-coins[n],dp);
        return dp[n][sum]= take+notake;
    }
    long long int count(int coins[], int N, int sum) {

        // code here.
        vector<vector<long long int>>dp(N+1,vector<long long int>(sum+1,-1));
        
        return solve(coins,N-1,sum,dp);
    }
};