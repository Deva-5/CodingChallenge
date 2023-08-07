#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int>v;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                v.push_back(matrix[i][j]);
            }
        }
        int l=0,h=v.size()-1;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(v[mid]==target)
            {
                return true;
            }
            else if(v[mid]>target)
            {
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return false;
    }
};