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
    vector<int> res;

    void render(TreeNode* root){
        if(root == NULL) return;

        render(root->left);
        res.push_back(root->val);
        render(root->right);
    }

    TreeNode* increasingBST(TreeNode* root) {
        render(root);
        TreeNode* tmp = new TreeNode();
        TreeNode* ans = tmp;

        for(int i=0; i<res.size()-1; i++){
            tmp->val = res[i];
            tmp->left = NULL;
            tmp->right = new TreeNode();
            tmp = tmp->right;
        }
        tmp->val = res[res.size()-1];

        return ans;
    }
};
