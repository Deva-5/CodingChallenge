#include<bits/stdc++.h>
using namespace std;

class Soluton{
public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int>ans;
    vector<int> solve(int cur,int par,vector<int> adj[],vector<int>&vis)
    {
        vis[cur] = 1;
        ans.push_back(cur);
        for(auto nb : adj[cur])
        {
            if(vis[nb]!=1){
                solve(nb,cur,adj,vis);
            }
        }
        return ans;
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>vis(V,0);
        return solve(0,-1,adj,vis);
    }
};