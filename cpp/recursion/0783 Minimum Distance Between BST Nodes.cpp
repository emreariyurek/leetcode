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
        vector<int> vec;
        inorder(root, vec);
        int result = abs(vec[0] - vec[1]);
        for (int i = 2; i < vec.size(); i++) {
            result = min(result, abs(vec[i] - vec[i - 1]));
        }
        
        return result;
    }
    
    void inorder(TreeNode *node, vector<int> &vec) {
        if (!node)
            return;
        
        inorder(node->left, vec);
        vec.push_back(node->val);
        inorder(node->right, vec);
    }
};