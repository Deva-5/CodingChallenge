#include<bits/stdc++.h>

using namespace std;

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>vis(V,-1);
        queue<int>q;
        q.push(0);
        vis[0]=1;
        vector<int>ans;
        while(!q.empty())
        {
            int x = q.front();
            q.pop();
            ans.push_back(x);
            for(int v : adj[x])
            {
                if(vis[v]==-1)
                {
                    q.push(v);
                    vis[v]=1;
                }
            }
        }
        return ans;
    }
};