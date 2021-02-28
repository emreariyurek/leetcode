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
    int sum = 0;
    
    int sumRootToLeaf(TreeNode* root) {
        preorder(root, 0);
        return sum;
    }
    
    void preorder(TreeNode *node, int n) {
        if (!node)
            return;
        
        n = (n << 1) | node->val;
        if (!node->left && !node->right) 
            sum += n;
        
        preorder(node->left, n);
        preorder(node->right, n);
    }
};