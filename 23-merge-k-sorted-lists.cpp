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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0)
            return NULL;
        return BinMerge(lists, 0, lists.size()-1);
    }

    ListNode* BinMerge(vector<ListNode*> lists, int left, int right){
        if(left == right)
            return lists[right];
        if(left+1 == right){
            return mergeTwoLists(lists[left], lists[right]);
        }

        int mid = left + (right-left)/2;
        ListNode* x = BinMerge(lists, mid+1, right);
        ListNode* y = BinMerge(lists, left, mid);
        return mergeTwoLists(x, y);
    }

    ListNode* mergeTwoLists(ListNode* a, ListNode* b){
        ListNode* ans = new ListNode(0);
        ListNode* curr = ans;
        
        while(a && b){
            if(a->val > b->val){
                curr -> next = b;
                b = b->next;
            }
            else {
                curr -> next = a;
                a = a->next;
            }
            curr = curr->next;
        }
        
        curr -> next = a ? a : b;
        return ans->next;
    }
};
