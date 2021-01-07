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
    int findBottomLeftValue(TreeNode* root) {
        if(root==NULL)
            return 0;
        if(root->left==NULL && root->right==NULL )
            return root->val;
        queue<TreeNode*> q;
        int h=0;
        int k=0;
        q.push(root);
        q.push(NULL);
        while(q.size()>1)
        {
            TreeNode* temp=q.front();
            q.pop();
            if(temp==NULL)
            {
                q.push(NULL);
                k=1;
            }
            else
            {
                if(k)
                    h=temp->val;
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right); 
                k=0;
            }
        }
        return h;
    }
};
