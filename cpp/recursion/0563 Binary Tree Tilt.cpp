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
    int findTilt(TreeNode* root) {
        if (!root)
           return 0;
        
        int sum = 0;
        dfs(root, sum);
        return sum; 
    }
    
    int dfs(TreeNode *node, int &sum) {
        if (!node)
            return 0;
        
        int l = 0, r = 0;
        l += dfs(node->left, sum);
        r += dfs(node->right, sum);
        sum += abs(l - r);
        return l + r + node->val;
    }
};