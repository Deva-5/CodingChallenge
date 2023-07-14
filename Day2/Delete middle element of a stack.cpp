#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int size)
    {
        // code here..
        vector<int>ans;
        while(!s.empty())
        {
            int top = s.top();
            s.pop();
            ans.push_back(top);
        }
        int mid = (size+1)/2;
        for(int i=size-1;i>=0;i--)
        {
            if(i!=mid and size%2==0)
            {
                s.push(ans[i]);
            }
            else if(i!=mid-1 and size%2!=0)
            {
                s.push(ans[i]);
            }
        }
    }
};