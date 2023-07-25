#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        long long curr = 0 , ans = 0;
        int n = nums.size();
        for(int i=n-1;i>=0;i--)
        {
            if(nums[i]<=curr)
            {
                curr += nums[i];
            }
            else
            {
                curr = nums[i];
            }
            ans = max(ans,curr);
        }
        return ans;
    }
};