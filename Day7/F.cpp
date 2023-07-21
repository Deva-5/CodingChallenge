#include <bits/stdc++.h>

using namespace std;

#define int long long


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n;cin>>n;
        map<int,int> mp;
        int x;
        vector<int>v(n+1);
        for (int i=0;i<n;i++)
        {
            cin>>x;
            if (x<=n)
            {
                mp[x]++;
            }
        }
        for (int i=1;i<=n;i++)
        {
            for (int j=i;j<=n;j+=i)
            {
                v[j]+=mp[i];
            }
            
        }
        sort(v.begin(),v.end());
        cout<<v[n]<<'\n';
    }
    
    return 0;
}