/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return NULL;
        if(root==p) return p;
        if(root==q) return q;
        TreeNode* lst=lowestCommonAncestor(root->left,p,q);
        TreeNode* rst=lowestCommonAncestor(root->right,p,q);
        if(lst==NULL && rst==NULL) return NULL;
        else if(lst!=NULL && rst==NULL) return lst;
        else if(lst==NULL && rst!=NULL) return rst;
        else return root;
    }
};