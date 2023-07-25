#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isvowel(char s)
    {
        if(s=='a' or s=='A' or s=='e' or s=='E' or s=='i' or s=='I' or s=='o' or s=='O' or s=='u' or s=='U')
        {
            return true;
        }
        return false;
    }
    string sortVowels(string s) {
        priority_queue<char,vector<char>,greater<char>>pq;
        for(auto x:s)
        {
            if(isvowel(x))
            {
                pq.push(x);
            }
        }
        string ans = "";
        for(auto x:s)
        {
            if(isvowel(x))
            {
                ans+=pq.top();
                pq.pop();
            }
            else
            {
                ans+=x;
            }
        }
        return ans;
    }
};