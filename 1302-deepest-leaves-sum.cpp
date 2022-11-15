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
    int handleTreeHeight(TreeNode* root){
        if(root == NULL) return 0;
        return 1 + max(handleTreeHeight(root->left), handleTreeHeight(root->right));
    }

    int cal(TreeNode* root, int h, int maxh) {
        if(root == NULL) return 0;
        if(++h == maxh) return root->val;
        return cal(root->right, h, maxh) + cal(root->left, h, maxh);
    }

    int deepestLeavesSum(TreeNode* root) {
        int maxh = handleTreeHeight(root);
        return cal(root, 0, maxh);
    }
};
