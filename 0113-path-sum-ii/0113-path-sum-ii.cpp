class Solution {
public:
    void helper(TreeNode* root, int target, vector<int>& path,
             vector<vector<int>>& ans) {
        if (root==NULL)
            return;

        path.push_back(root->val);

        if (root->left==NULL&& root->right==NULL && target == root->val) {
            ans.push_back(path);
        } else {
            helper(root->left, target - root->val, path, ans);
            helper(root->right, target - root->val, path, ans);
        }
        path.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> path;
        helper(root, targetSum, path, ans);
        return ans;
    }
};