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
    int ans = 0;
    // pair < SUM , COUNT >
    pair<int, int> calculate(TreeNode* root){
        if(root == NULL) return {0, 0};

        auto l = calculate(root->left);
        int leftCnt = l.first, leftSum = l.second;

        auto r = calculate(root->right);
        int rightCnt = r.first, rightSum = r.second;

        int Cnt = 1 + leftCnt + rightCnt;
        int Sum = root->val + leftSum + rightSum;

        ans += (root->val == Sum/Cnt);
        
        return {Cnt, Sum};
    }
    
    int averageOfSubtree(TreeNode* root) {
        calculate(root);
        return ans;
    }
};
