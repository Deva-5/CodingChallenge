//POTD Day July 14
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        int n = arr.size();
        unordered_map<int, int> dp;
        int ans = 1;
        for (int i = 0; i < n; i++) 
        {
            int num = arr[i];
            if (dp.find(num - difference) != dp.end()) // checking for the difference value
            {
                dp[num] = dp[num - difference] + 1;
            } 
            else 
            {
                dp[num] = 1;
            }
            ans = max(ans, dp[num]); // return upto maximum value
        }
        return ans;
    }
};