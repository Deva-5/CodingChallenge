#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int solve(int n,int m,string &s,string &t)
    {
        vector<vector<int>>dp(n+1,vector<int>(m+1));
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0 or j==0)
                {
                    dp[i][j] = 0;
                }
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(s[i-1]==t[j-1])
                {
                    dp[i][j] = 1+dp[i-1][j-1];
                }
                else
                {
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
    }
    int lcs(int n, int m, string s1, string s2)
    {
        // your code here
        return solve(n,m,s1,s2);
    }
};