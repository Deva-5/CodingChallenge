#include<bits/stdc++.h>
using namespace std;
/*
Approach:
1.Use the map to store the frequencies of b,a,l,o,n;
2.The minimum freq of a character other than o,l 
3.If it is o and l divide freq by 2 because of double occurance in the original balloon
*/
class Solution{
public:
    int maxInstance(string s){
        map<char,int>mp;
        int n = s.size();
        string t="balon";
        for(int i=0;i<n;i++)
        {
            if(t.find(s[i])!=string::npos)
            {
                mp[s[i]]++;
            }
        }
        int ans = INT_MAX;
        for(auto x:mp)
        {
            if(x.first=='l' or x.first=='o')
            {
                int b = ceil(x.second/2);
                ans = min(ans,b);
            }
            else
            {
                ans = min(x.second,ans);
            }
        }
        return ans;
    }
};