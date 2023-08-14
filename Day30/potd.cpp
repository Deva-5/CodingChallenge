#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int res = 0;
        for(auto x:nums)
        {
            res ^= x;
        }
        int right = res & -res;
        int num1 = 0,num2 = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]&right)
            {
                num1 ^= nums[i];
            }
            else
            {
                num2 ^= nums[i];
            }
        }
        if(num1<num2)
        {
            return {num1,num2};
        }
        return {num2,num1};
    }
};