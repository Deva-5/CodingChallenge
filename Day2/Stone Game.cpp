#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n = piles.size();
        sort(piles.rbegin(),piles.rend());
        int alice = 0,bob = 0;
        for(int i=0;i<n;i++)
        {
            if(i&1) bob+=piles[i];
            else alice+=piles[i];
        }
        return alice > bob ? true : false;
    }
};