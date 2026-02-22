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
    bool isCousins(TreeNode* root, int x, int y) {
        //Level
        queue<TreeNode *>q;
        q.push(root);
        bool la=0;
        bool lb=0;
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* temp=q.front();
                q.pop();

                if(temp->val==x) la=1;
                if(temp->val==y) lb=1;
// Checking Siblings
                if(temp->left!=NULL && temp->right!=NULL)
                {
                    if((temp->left->val==x && temp->right->val==y) || (temp->left->val==y && temp->right->val==x))
                    {
                        return false;
                    }
                }
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
        if(la && lb) return true;
        if(la || lb) return false;
        }
        return false;
    }
};