#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int maxi = INT_MIN;
        int c = 1;
        for(int i=0;i<n-1;i++)
        {
            if(v[i+1]-v[i]<=k)
            {
                c++;
            }
            else
            {
                maxi = max(c,maxi);
                c = 1;
            }
            
        }
        maxi = max(c,maxi);
        if(maxi==INT_MIN)
        {
            cout<<0<<'\n';
        }
        else
        {
            cout<<n-maxi<<'\n';
        }
    }
}