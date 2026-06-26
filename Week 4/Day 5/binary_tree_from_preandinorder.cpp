/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
TreeNode*solve(vector<int>&preorder,vector<int>&inorder,int&preindex,int instart,int inend,unordered_map<int,int>&mp)
{
    if(instart>inend)
    return NULL;
    int rootval=preorder[preindex++];
    TreeNode*root=new TreeNode(rootval);
    int idx=mp[rootval];
    root->left=solve(preorder,inorder,preindex,instart,idx-1,mp);
    root->right=solve(preorder,inorder,preindex,idx+1,inend,mp);
    return root;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int>mp;
        for(int i=0;i<inorder.size();i++)
        {
            mp[inorder[i]]=i;
        }
        int preindex=0;
        TreeNode*root=solve(preorder,inorder,preindex,0,inorder.size()-1,mp);
        return root;
    }
};