#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m)
    {
        sort(a.begin(),a.end());
        long long minimum=INT_MAX;
        long long start=0;
        long long end=m-1;

        while(end<n)
        {
            minimum=min(minimum,a[end]-a[start]);
            start++;
            end++;
        }
        return minimum;
    }   
};