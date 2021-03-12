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
    vector<string> paths;
    
    vector<string> binaryTreePaths(TreeNode* root) {
        string path;
        preorder(root, path);
        return paths;
    }
    
    void preorder(TreeNode *node, string path) {
        if (!node)
            return;
        
        if (!node->left && !node->right) {
            path += to_string(node->val);
            paths.push_back(path);
            return;
        }
        
        path += to_string(node->val);
        path += "->";
        preorder(node->left, path);
        preorder(node->right, path);
    }
};