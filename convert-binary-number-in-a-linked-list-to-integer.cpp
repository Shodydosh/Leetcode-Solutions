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
    int Pow(int n){
        if(n==0) return 1;
        int tmp;
        tmp = 1;
        while(n--){
            tmp*=2;
        }
        return tmp;
    }
    
    int getDecimalValue(ListNode* head) {
        if(!head->next) return head->val;
        int q = 0;
        vector<int> a;
        
        while(head){
            int tmp = head->val;
            a.push_back(tmp);
            q++;
            head = head->next;
        }
        
        reverse(a.begin(), a.end());
        int ans=0;
        for(int i=0; i<q; i++){
            ans += Pow(i)*a[i];
        }
        return ans;
    }
};
