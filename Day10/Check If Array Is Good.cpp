class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(nums.size()==1) return false;
        if(nums[n-1]==nums[n-2] and nums[n-1]==n-1)
        {
            for(int i=0;i<n-2;i++)
            {
                if(nums[i]==nums[i+1])
                {
                    return false;
                }
            }
            return true;
        }
        else return false;
    }
};