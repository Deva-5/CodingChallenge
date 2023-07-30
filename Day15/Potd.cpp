#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};

class Solution{
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    void solve(Node *root,vector<Node*>&ans)
    {
        if(root==NULL)
        {
            return;
        }
        solve(root->left,ans);
        ans.push_back(root);
        solve(root->right,ans);
    }
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        //Your code here
        vector<Node*>ans;
        solve(root,ans);
        for(int i=0;i<ans.size()-1;i++)
        {
            if(ans[i]==x)
            {
                return ans[i+1];
            }
        }
        Node *temp = new Node(-1);
        return temp;
    }
};