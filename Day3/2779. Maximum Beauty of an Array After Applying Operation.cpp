#include<bits/stdc++.h>
using namespace std;
/*
Approach:
1.Using Map to store the ranges
2.PrefixSum
*/
class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        int ans = 0;
        int n = nums.size();
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]-k]++;
            mp[nums[i]+k+1]--;
        }
        int res = 0;
        for(auto x:mp)
        {
            res+=x.second;
            ans = max(ans,res);
        }
        return ans;
    }
};