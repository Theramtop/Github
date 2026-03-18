class Solution {
public:
    bool solve(TreeNode* root){
        if(!root){
            return false;
        }

        bool left = solve(root->left);
        bool right = solve(root->right);

        if(!left) root->left = NULL;
        if(!right) root->right = NULL;

        return left || right || root->val == 1;
    }

    TreeNode* pruneTree(TreeNode* root) {
        return solve(root) ? root : NULL;
    }
};