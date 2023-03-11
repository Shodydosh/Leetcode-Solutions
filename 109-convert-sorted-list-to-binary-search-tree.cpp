/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* render(TreeNode* root, int left, int right, vector<int> a){
        if(left>right) return NULL;
        int mid = (left+right)/2;
        root = new TreeNode(a[mid]);
        root->right = render(root->right, mid+1, right, a);
        root->left = render(root->left, left, mid-1, a);
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        TreeNode* root = NULL;
        vector<int> a;
        while(head){
            a.push_back(head->val);
            head = head->next;
        }
        TreeNode* ans = render(root, 0, a.size()-1, a);
        return ans;
    }
};
