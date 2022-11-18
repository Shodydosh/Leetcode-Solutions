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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* ans = new ListNode();
        ans -> next = head;

        ListNode* fast = ans;
        ListNode* slow = ans;

        for(int i=0; i<n; i++){
            fast = fast->next;
        }

        while(fast->next != NULL){
            fast = fast->next;
            slow = slow->next;
        }

        ListNode* tmp = slow->next;
        slow->next = slow->next->next;
        delete(tmp);

        return ans->next;
    }
};
