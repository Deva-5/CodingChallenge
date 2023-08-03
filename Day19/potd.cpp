#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        // code here
        vector<pair<int, int>> adjacencyList[N];
        for(vector<int> v:edges) {
            adjacencyList[v[0]].push_back({v[1], v[2]});
        }
        vector<int> ans(N, -1);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, 0});
        while(!pq.empty()) {
            int distFrom_vertex_0=pq.top().first;
            int node=pq.top().second;
            pq.pop();
            if(ans[node]!=-1 and ans[node]<distFrom_vertex_0) {
                continue;
            }
            ans[node]=distFrom_vertex_0;
            for(pair<int, int> p:adjacencyList[node]) {
                pq.push({(distFrom_vertex_0+p.second), p.first});
            }
        }
        return ans;
    }
};