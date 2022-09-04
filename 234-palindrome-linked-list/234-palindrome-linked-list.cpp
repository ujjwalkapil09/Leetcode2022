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
    int count(ListNode * a){
        int c=0;
        while(a){
            c++;
            a=a->next;
        }
        return c;
    }
    bool isPalindrome(ListNode* head) {
            if(head->next==NULL)return true;
            if(head->next->next==NULL){
                if(head->val!=head->next->val){
                    return false;
                }
                else{
                    return true;
                }
            }
        ListNode * a=head,*p=head,*q,*r=NULL,*s=head;
     int length=count(a);
        int len=length/2;
        if(length%2!=0){
            len++;
        }
        while(len--){
            q=p;
            p=p->next;
        }
        ListNode * trak=q;
        // cout<<trak->val;
        r=NULL;
        q=NULL;
        while(p){
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        trak->next=q;
        ListNode * slow=trak; 
        if(length%2==0){
            slow=slow->next;
        }
        while(head!=slow){
            if(head->val!=q->val){
                return false;
            }
            head=head->next;
            q=q->next;
        }
        // cout<<" "<<slow->val<<" "<<head->val<<" ";
        
        return true;
    }
};