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
    bool hasCycle(ListNode *head) {
        if(head==NULL|| head->next==NULL)return false;
        ListNode * fast=head->next, *slow=head;
        while(fast!=slow && fast && slow){
            fast=fast->next;
            slow=slow->next;
            if(fast){fast=fast->next;}
            else return false;
            
        }
        // cout<<fast->val;
        // cout<<"\n"<<slow->val;
        if(fast==NULL || slow==NULL){
            return false;
        }
        return true;
        
    }
};