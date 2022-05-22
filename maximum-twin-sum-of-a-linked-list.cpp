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
    int pairSum(ListNode* head) {
        vector<int> vals;
        
        while(head){
            vals.push_back(head->val);
            head = head->next;
        }
        
        int max = -1e9;
        for(int i=0; i<=vals.size()/2; i++){
            int sum = vals[i] + vals[vals.size()-i-1];
            if(max < sum) max = sum;
        }
        
        return max;
    }
};
