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
    void traverse(TreeNode* root, vector<vector<int>> &path, int level){
        if(root){
            if(path.size() <= level){
                vector<int> tmp;
                tmp.push_back(root->val);
                path.push_back(tmp);
            }
            else{
                path[level].push_back(root->val);
            }
            traverse(root->left, path, level+1);
            traverse(root->right, path, level+1);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> path;
        traverse(root, path, 0);
        return path;
    }
};
