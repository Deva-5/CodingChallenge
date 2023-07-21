#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;cin>>t;
    while(t--)
    {
        vector<int>v(3);
        for(int i=0;i<3;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        if(v[1]+v[2]>=10)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}