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
    bool OK = false;
    void traverse(TreeNode* root, int targetSum, int sum){
        if(root){
            sum += root->val;
            if(sum == targetSum && !root->left && !root->right){
                OK = true;
                return;
            }
            traverse(root->left, targetSum, sum);
            traverse(root->right, targetSum, sum);
        }
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        traverse(root, targetSum, 0);
        return OK;
    }
};
