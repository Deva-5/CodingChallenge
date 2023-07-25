#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string>ans;
        for(auto word : words)
        {
            stringstream ss(word);
            string temp;
            while(getline(ss,temp,separator))
            {
                if(temp!="")
                {
                    ans.push_back(temp);
                }
            }
        }
        return ans;
    }
};