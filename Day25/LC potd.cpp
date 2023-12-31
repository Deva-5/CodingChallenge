#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0 ,h = nums.size()-1;
        while(l<=h)
        {
            int mid = (l+h)/2;
            if(nums[mid] == target)
            {
                return mid;
            }
            if(nums[l] <= nums[mid])
            {
                if(nums[l] <= target and target < nums[mid])
                {
                    h = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            else
            {
                if(nums[mid] < target and target <= nums[h])
                {
                    l = mid + 1;
                }
                else
                {
                    h = mid - 1;
                }
            }
        }
        return -1;
    }
};