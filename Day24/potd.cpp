#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int countFractions(int n, int numerator[], int denominator[])
    {
        map<double,int>mp;
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            double x = numerator[i]*1.0/(denominator[i]*1.0);
            double y = (denominator[i]-numerator[i])*1.0/denominator[i]*1.0;
            //cout<<x<<" ";
            cnt+=mp[y];
            mp[x]++;
        }
        return cnt;
    }
};