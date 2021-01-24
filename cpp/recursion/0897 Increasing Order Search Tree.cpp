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
    TreeNode *head = nullptr;
    TreeNode *curr = nullptr;
    
    TreeNode* increasingBST(TreeNode* root) {
        if (!root)
            return nullptr;
        
        increasingBST(root->left);
        root->left = nullptr;
        if (!head)
            head = root;
        if (curr) 
            curr->right = root;
        curr = root;
        increasingBST(root->right);
        return head;
    }
};