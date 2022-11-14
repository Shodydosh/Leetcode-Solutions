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
int sum = 0;

class Solution {
public:
    int calculate(TreeNode* root, int low, int high, int &sum){
        //check if this root is exist
        if(root == NULL) return sum;

        calculate(root->left, low, high, sum);
        if(root->val <= high && low <= root->val){
            sum += root-> val;
        }
        calculate(root->right, low, high, sum);
        return sum;
    }

    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        return calculate(root, low, high, sum);
    }
};
