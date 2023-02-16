/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* r = root;
        while(1){
            if(r->val == p->val) {return p; break;}
            if(r->val == q->val) {return q; break;}

            if(r->val < q->val && r->val > p->val) {return r; break;}
            if(r->val < p->val && r->val > q->val) {return r; break;}

            if(p->val > r->val && q->val > r->val) r = r->right;
            else r = r->left;
        }
    }
};
