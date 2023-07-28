#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};

class Solution{
    public:
        Node* LCA(Node *root, int n1, int n2)
        {
            // code here
            if(root==NULL) return root;
            if(root->data==n1 or root->data==n2)
                return root;
            
            Node *right = LCA(root->right,n1,n2);
            Node *left = LCA(root->left,n1,n2);
            
            if(left and right)
            {
                return root;
            }
            
            return left ? left : right;
        }

};