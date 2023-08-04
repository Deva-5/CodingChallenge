#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    void Reverse(stack<int> &St){
        queue<int>st;
        while(!St.empty())
        {
            st.push(St.top());
            St.pop();
        }
        while(!st.empty())
        {
            St.push(st.front());
            st.pop();
        }
    }
};