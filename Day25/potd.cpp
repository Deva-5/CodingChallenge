#include<bits/stdc++.h>
using namespace std;

class Solution{
public: 
    long long int largestPrimeFactor(int N){
        // code here
        long long int ans = 0;
        for(long long int i=2;i<=sqrt(N);i++)
        {
            while(N%i==0)
            {
                ans = max(ans,i);
                N=N/i;
            }
        }
        if(N>1)
        {
            ans = N;
        }
        return ans;
    }
};