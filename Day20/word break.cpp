#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool solve(string s,map<string,bool>&mp,map<pair<int,string>,bool>&dp,int idx,string temp)
    {
        if(idx == s.length() and temp=="") return true;
        if(idx == s.length()) return false;
        if(dp.find({idx,temp})!=dp.end()) return dp[{idx,temp}];
        bool ans = false;
        temp+=s[idx];
        if(mp.find(temp)!=mp.end())
        {
            ans = solve(s,mp,dp,idx+1,"");
        }
        ans = ans || solve(s,mp,dp,idx+1,temp);
        return dp[{idx,temp}] = ans;
    }
    
    bool wordBreak(string s, vector<string>& wordDict) {
        map<string,bool>mp;
        map<pair<int,string>,bool> dp;
        for(auto x:wordDict) mp[x] = true;
        return solve(s,mp,dp,0,"");
    }
};