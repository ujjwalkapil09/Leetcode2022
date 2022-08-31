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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL)return NULL;
        if(head->next==NULL&& n==1)return NULL;
        
        ListNode * p=head,*trail=NULL,*look_ahead=NULL,*pointer=head;
        int len=count(p);
        int till=len-n;
        // cout<<till;
        int counter=0;
        if(till==counter){
            return head->next;
        }
        while(counter<till){
            trail=pointer;
            pointer=pointer->next;
            counter++;
        }
        trail->next=pointer->next;
        return head;
    }
};