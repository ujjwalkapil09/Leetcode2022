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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * p=headA,*q=headB;
        set<ListNode*> hashmap;
        while(p){
            hashmap.insert(p);
            p=p->next;
        }
        while(q){
            if(hashmap.count(q)){
                return q;
            }
            q=q->next;
        }
        return NULL;
    }
};