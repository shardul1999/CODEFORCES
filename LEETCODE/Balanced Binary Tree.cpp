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
pair<int,int> balanced_tree(TreeNode* root)
{
    pair<int,int> p;
    if(root==NULL)
    {
        p.first=-1;
        p.second=1;
        return p;
    }
    pair<int,int> l_tree=balanced_tree(root->left);
    pair<int,int> r_tree=balanced_tree(root->right);
    p.first=1+max(l_tree.first,r_tree.first);
    if(abs(l_tree.first - r_tree.first)<=1 && l_tree.second && r_tree.second)
        p.second=1;
    else
        p.second=0;
    return p;
}

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        pair<int,int> s=balanced_tree(root);
        return s.second;
    }
};
