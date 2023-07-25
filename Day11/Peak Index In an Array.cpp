#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int c = INT_MIN;
        int d = -1;
        for(int i=0;i<n;i++)
        {
            if(c<arr[i])
            {
                c = arr[i];
                d = i;
            }
        }
        return d;
    }
};