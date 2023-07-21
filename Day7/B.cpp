#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<pair<int,int>>v;
        for(int i=1;i<=n;i++)
        {
            int a,b;cin>>a>>b;
            if(a<=10)
            {
                v.push_back({b,i});
            }
        }
        sort(v.begin(),v.end());
        cout<<v[v.size()-1].second<<'\n';
    }
}