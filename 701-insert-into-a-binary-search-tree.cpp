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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* tmp = root;
        TreeNode* newLeaf = new TreeNode(val);
        
        while(1){
            if(tmp){
                if(val > tmp->val){
                    if(tmp->right)
                        tmp = tmp->right;
                    else{
                        tmp->right = newLeaf;
                        return root;
                    }
                }
                else{
                    if(tmp->left)
                        tmp = tmp->left;
                    else{
                        tmp->left = newLeaf;
                        return root;
                    }
                }
            }
            else return newLeaf;
        }

        return root;
    }
};
