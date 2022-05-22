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
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* tmp = head;
        while(head != NULL && head->next != NULL){
            int temp;
            temp = head->val;
            head->val = head->next->val;
            head->next->val = temp;
            head = head->next->next;
        }
        return tmp;
    }
};
