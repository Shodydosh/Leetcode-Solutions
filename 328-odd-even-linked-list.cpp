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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *odd, *even;
        ListNode *evenHead, *oddHead;

        if(!head || !head->next || !head->next->next) return head;

        odd = head;
        even = head->next;
        oddHead = odd;
        evenHead = even;
         
        while(even && even->next){
            odd -> next = odd -> next -> next;
            even -> next = even -> next -> next;
            odd = odd->next;
            even = even->next;
        }

        odd->next = evenHead;
        return oddHead;
    }
};