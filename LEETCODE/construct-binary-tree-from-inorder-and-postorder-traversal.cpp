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
    
    int index1;
    TreeNode* build_pre_in(vector<int>& preorder,vector<int>& inorder,int start,int end)
    {
    if(start>end)
        return NULL;
    TreeNode* root=new TreeNode(preorder[index1]);
    int idx=-1;
    for(int k=start;k<=end;k++)
    {
        if(inorder[k]==preorder[index1])
        {
            idx=k;
            break;
        }
    }
    index1=index1-1;
    
       root->right=build_pre_in(preorder,inorder,idx+1,end);
       root->left=build_pre_in(preorder,inorder,start,idx-1);
    return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
     index1=inorder.size()-1;
    return build_pre_in(postorder,inorder,0,index1);
    }
};
