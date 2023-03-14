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
    void cal(TreeNode* root, int curr, int &ans){
        if(!root) return;
        
        curr = curr*10+root->val;
        cal(root->right, curr, ans);
        cal(root->left, curr, ans);
        if(root->right==NULL && root->left==NULL)
        ans += curr;
    }
    int sumNumbers(TreeNode* root) {
        int ans = 0;
        cal(root, 0, ans);
        return ans;
    }
};
