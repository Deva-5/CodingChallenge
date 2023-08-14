#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int nthFibonacci(int n){
        // code here
              int x=0,y=1,z,m=1000000007,i=2;
        if(n==1)z=y;
        else{
        while(i<=n){
            z=(x+y)%m;
            x=y;
            y=z;
            i++;
        }}
        return z;
    }
};