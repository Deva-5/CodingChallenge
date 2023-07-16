#include<bits/stdc++.h>
using namespace std;
/*
Approach:
1.First take the size of the array as N
2.Check where N%i==0 and multiply the nums[i-1]*nums[i-1]
*/
class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                ans+=nums[i-1]*nums[i-1];
            }
        }
        return ans;
    }
};