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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        if(l1==NULL && l2==NULL) return NULL;
        if(l1==NULL)return l2;
        if(l2==NULL)return l1;
        ListNode * p=l1, *q=l2,*temp,*ans,*answer;
        int  count=0;
        while(p && q){
        temp=new ListNode;
            temp->val=(p->val+q->val+carry)%10;
            carry=(p->val+q->val+carry)/10;
            if(count==0){
               answer= ans=temp;
            }
            else{
                ans->next=temp;
            ans=ans->next;
            }
            
            count++;
            p=p->next;
            q=q->next;
        }
        while(p){
            temp=new ListNode;
            temp->val=(p->val+carry)%10;
            carry=(p->val+carry)/10;
            if(count==0){
               answer= ans=temp;
            }
            else{
                ans->next=temp;
            ans=ans->next;
            }
            
            p=p->next;
        }
        while(q){
            // cout<<"Enter into q";
            temp=new ListNode;
            temp->val=(q->val+carry)%10;
            carry=(q->val+carry)/10;
            if(count==0){
               answer= ans=temp;
            }
            else{
                ans->next=temp;
            ans=ans->next;
            }
            
            q=q->next;
        }
        // cout<<carry;
        if(carry>0 && p==NULL && q==NULL){
            temp=new ListNode;
            temp->val=(carry)%10;
            carry=(carry)/10;
            ans->next=temp;
            ans=ans->next;
        }
        return answer;
    }
};