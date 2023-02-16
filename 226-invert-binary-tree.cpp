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
    void invertBT(TreeNode* root){
        if(root){
            if(root -> right && root -> left) swap(root->right, root->left);
            else if(root -> left){
                root->right = root->left;
                root->left = NULL;
            }
            else {
                root->left = root->right;
                root->right = NULL;
            }

            if(root -> left) invertBT(root->left);
            if(root -> right) invertBT(root->right);
        }
    }
    TreeNode* invertTree(TreeNode* root) {
        TreeNode* tmp = root;
        invertBT(root);  
        return tmp;              
    }
};
