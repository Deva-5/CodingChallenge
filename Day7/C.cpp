#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;cin>>t;
    while(t--)
    {
        vector<string>v(8);
        for(int i=0;i<8;i++)
        {
            cin>>v[i];
        }
        string ans = "";
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                if(v[j][i]!='.')
                {
                    ans+=v[j][i];
                }
            }
        }
        cout<<ans<<'\n';
    }
}