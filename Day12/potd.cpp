#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left, *right;
};

void solve(Node *root,unordered_map<int,int>&mp)
{
    if(root==NULL) return;
    if(root->left!=NULL) mp[root->left->data] = root->data;solve(root->left,mp);
    if(root->right!=NULL) mp[root->right->data] = root->data;solve(root->right,mp);
}
int kthAncestor(Node *root, int k, int node)
{
    // Code here
    Node *temp = root;
    unordered_map<int,int>mp;
    solve(temp,mp);
    int parent = -1;
    while(k--)
    {
        parent = mp[node];
        node = parent;
    }
    return parent == 0 ? -1 : parent;
}