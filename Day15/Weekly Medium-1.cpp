#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        set<int>st;
        for(auto x:nums)
        {
            st.insert(x);
        }
        int ans = 0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            map<int,int>mp;
            for(int j=i;j<n;j++)
            {
                mp[nums[j]]++;
                ans+=mp.size()/st.size();
            }
        }
        return ans;
    }
};