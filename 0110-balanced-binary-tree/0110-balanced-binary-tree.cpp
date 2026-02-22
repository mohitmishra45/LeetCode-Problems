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
    int height(TreeNode *root,bool &valid)
    {
        if(root==NULL) return 0;
        int lfs=height(root->left,valid);
        int rfs=height(root->right,valid);
        if(abs(lfs-rfs)>1) valid=0;
        return 1+max(lfs,rfs);
    }
    bool isBalanced(TreeNode* root) {
        bool valid=1;
        height(root,valid);
        return valid;
       
    }
};