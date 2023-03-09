/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* tmp = head;
        unordered_map<ListNode*, int> umap;
        while(tmp){
            if(umap.find(tmp) != umap.end()){
                // found in umap
                return tmp;
            }

            umap[tmp] ++;
            tmp = tmp->next;
        }
        return NULL;
    }
};
