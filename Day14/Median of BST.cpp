#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};

void solve(Node* root,vector<int>&ans)
{
    if(root==NULL)
    {
        return;
    }
    solve(root->right,ans);
    ans.push_back(root->data);
    solve(root->left,ans);
}
float findMedian(struct Node *root)
{
      //Code here
      vector<int>ans;
      solve(root,ans);
      if(ans.size()%2==0)
      {
          int a = ans[ans.size()/2-1];
          int b = ans[ans.size()/2];
          float c = (a+b)/2.0;
          return c;
      }
      else
      {
          return (float)ans[ans.size()/2];
      }
}