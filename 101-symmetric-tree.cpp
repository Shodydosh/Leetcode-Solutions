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
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return 1;
        else return checking(root->left, root->right);
    }

    bool checking(TreeNode *left, TreeNode *right){
        if(left == NULL && right == NULL) return 1;

        if(left == NULL || right == NULL){
            return 0;
        }

        if(left->val == right->val) return checking(left->left, right->right) && checking(left->right, right->left);
        return 0;
    }
};
