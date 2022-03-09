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
    
    ListNode* deleteDuplicates(ListNode* head) {
         ListNode* p,*q,*last;
        p=head;
        q=head;
        last=NULL;
        // q=NULL;
        // q=new ListNode;
        
        int arr[202]={0};
        if(q==NULL){
            return NULL;
        }
        while(p){
            arr[p->val+100]++;
            p=p->next;
            
            
        }
        cout<<arr[101];
        // int i=0;
        int temp=0;
        // if(arr[0]==1)
        // arr[0]=i-100;
        for(int i=0;i<202;i++ && q){
            
            if(arr[i]==1){
                // last=q;
                temp=1;
                q->val=i-100;
                last=q;
                // cout<<q->val;
                q=q->next;
                
            }
            
        }
        // last->val=NULL;
        if(temp==0){
            return NULL;
        }
        else if(last){
        last->next=NULL;}
        // if(q->next!=NULL){
        // last->next=NULL;}
        // p->next;
        return head;
        
    }
};