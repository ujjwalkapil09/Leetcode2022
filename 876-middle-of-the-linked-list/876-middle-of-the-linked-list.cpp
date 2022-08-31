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
    int count(ListNode * p){
        int c=0;
        while(p){
            c++;
            p=p->next;
        }
        return c;
    }
    ListNode* middleNode(ListNode* head) {
        ListNode * p=head,*q=head;
        int c=count(p);
        if(c%2==0){
             c=c/2;
        }
        else{
            c=c/2;
            // c++;
        }
        int check=0;
        while(check<c)
        {
            q=q->next;
            check++;
        }
        return q;
    }
};