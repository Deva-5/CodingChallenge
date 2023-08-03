#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void solve(int idx,vector<string>&ans,string digits,vector<string>&st,string &p)
    {
        if(idx==digits.size())
        {
            ans.push_back(p);
            return;
        }
        string start = st[digits[idx]-'0'];
        for(int i=0;i<start.size();i++)
        {
            p+=start[i];
            solve(idx+1,ans,digits,st,p);
            p.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        string p="";
        if(digits=="")
        {
            return ans;
        }
        vector<string> st = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(0,ans,digits,st,p);
        return ans;
    }
};