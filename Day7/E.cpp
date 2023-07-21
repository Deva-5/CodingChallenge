#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() 
{
    int t;cin>>t;
    while(t--)
    {
        int n,c;cin>>n>>c;
        int l=0,r,sum=0;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
           cin>>v[i];
           r = v[i];
           l+=r*r;
           sum+=r;
        }
        c=c-l;
        c=c/4;
        c=c/n;
        sum = sum/(2*n);
        int x = sqrtl(sum*sum+c);
        x-=sum;
        cout<<x<<'\n';
    }
    return 0;
}