class Solution
{
    public:
    void solve(Node *root,map<int,vector<int>>&mp,int l)
    {
        if(root==NULL)
        {
            return;
        }
        solve(root->left,mp,l+1);
        mp[l].push_back(root->data);
        solve(root->right,mp,l+1);
    }
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       map<int,vector<int>>mp;
       solve(root,mp,0);
       vector<int>ans;
       for(auto x:mp)
       {
           auto y = x.second;
           ans.push_back(y[y.size()-1]);
       }
       return ans;
    }
};