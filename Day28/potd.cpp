#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:

    int longestSubsequence(int n, int a[])
    {
       // your code here
       vector<int>lis;
       lis.push_back(a[0]);
       for(int i=1; i<n; i++){
           if(a[i]>lis.back()){
               lis.push_back(a[i]);
           }
           else{
            
               auto it = lower_bound(lis.begin(), lis.end(), a[i]);
                int index = it - lis.begin(); 
               lis[index] = a[i];
           }
       }
       return lis.size();
    }
};