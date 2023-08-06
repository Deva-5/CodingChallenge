#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string finalString(string s) {
        string temp = "";
        for (auto x:s)
        {
            if(x=='i')
            {
                reverse(temp.begin(),temp.end());
            }
            else
            {
                temp+=x;
            }
        }
        return temp;
    }
};