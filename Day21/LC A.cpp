#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        if(purchaseAmount==0) return 100;
        if(purchaseAmount%10==0) return 100-purchaseAmount;
        double ex = purchaseAmount/10.0;
        long x = round(ex);
        int n = (int)x;
        return 100-n*10;
    }
};