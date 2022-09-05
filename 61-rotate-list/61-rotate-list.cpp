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
    int countt(ListNode *a){
        int count=0;
        while(a){
            count++;
            a=a->next;
        }
        return count;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)return head;
        if(k==0 || head->next==NULL)return head;
        
        
        ListNode * a=head,*p=head,*q,*r=head;
        int len=countt(a);
        
        len=len-k%len;
        cout<<len;
        a=head;
        if(len==countt(a)){
            cout<<"Entered";
        return head;
        }
        while(len--){
            q=p;
            p=p->next;
        }
        ListNode * answer=q->next;
        // cout<<answer->val;
        q->next=NULL;
        while(p->next!=NULL){
            q=p;
            p=p->next;
        }
        p->next=r;
        return answer;
    }
};