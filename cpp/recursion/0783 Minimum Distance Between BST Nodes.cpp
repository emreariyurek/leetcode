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
    int minDiffInBST(TreeNode* root) {
        int value = -1, result = INT_MAX;
        dfs(root, value, result);
        return result;
    }
    
    void dfs(TreeNode *node, int &value, int &result) {
        if (!node)
            return;
        
        dfs(node->left, value, result);
        if (value != -1)
            result = min(result, abs(node->val - value));
        value = node->val;
        dfs(node->right, value, result);
    }
};