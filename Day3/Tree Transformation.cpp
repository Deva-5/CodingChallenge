#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int solve(int N, vector<int> p){
        // code here
        vector<int>v(N);
        for(int i=1;i<N;i++)
        {
            v[p[i]]++;
        }
        int ans = -1;
        for(auto x:v)
        {
            if(x>0)
            {
                ans+=1;
            }
        }
        if(v[0]<2)
        {
            ans-=1;
        }
        return max(0,ans-1);
    }
};