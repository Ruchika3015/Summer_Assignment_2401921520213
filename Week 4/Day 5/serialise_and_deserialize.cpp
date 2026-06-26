/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
void serialsolve(TreeNode*root,string &s)
{
    if(!root)
    {
        s+="null,";
        return;
    }
    s+=to_string(root->val)+",";
    serialsolve(root->left,s);
    serialsolve(root->right,s);
    return;
}
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string s="";
        serialsolve(root,s);
        return s;
    }
TreeNode* solve(queue<string>&q)
{
    if(q.empty())
    return nullptr;
    string val=q.front();
    q.pop();
    if(val=="null")
    return NULL;
    TreeNode* root=new TreeNode(stoi(val));
    root->left=solve(q);
    root->right=solve(q);
    return root;
}
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        queue<string>q;
        string temp="";
        for(char c:data)
        {
            if(c==',')
            {
                q.push(temp);
                temp="";
            }
            else
            temp+=c;
        }
        return solve(q);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));