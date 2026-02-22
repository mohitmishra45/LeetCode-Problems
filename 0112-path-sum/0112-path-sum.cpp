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
int target;
    bool hasPathSum(TreeNode* root, int targetSum) {
        target=targetSum;
        return helper(root,0);
    }
    bool helper(TreeNode *root,int sum)
    {
        if(root==NULL) return false;
        sum+=root->val;
        if(root->left==NULL && root->right==NULL)
        {
            return sum==target;
        }
        int lsum=helper(root->left,sum);
        int rsum=helper(root->right,sum);
        return lsum || rsum;
    }
};