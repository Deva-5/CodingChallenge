#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; 

vector<int> findSpiral(Node *root)
{
    //Your code here
    deque<Node*>q;
    q.push_back(root);
    bool reverse = false;
    vector<int>ans;
    while(!q.empty())
    {
        int sz = q.size();
        
        if(!reverse)
        {
            while(sz--)
            {
                auto x = q.front();
                q.pop_front();
                if(x->right!=NULL) q.push_back(x->right);
                if(x->left!=NULL) q.push_back(x->left);
                ans.push_back(x->data);
            }
        }
        else
        {
            while(sz--)
            {
                auto x = q.back();
                q.pop_back();
                if(x->left!=NULL) q.push_front(x->left);
                if(x->right!=NULL) q.push_front(x->right);
                ans.push_back(x->data);
            }
        }
        reverse = !reverse;
    }
    return ans;
}