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
    int counth(ListNode *u){
        int ans=0;
        while(u!=NULL){
            ans++;
            u=u->next;
        }
        // cout<<ans;
        return ans;
    }
    ListNode* rotateRight(ListNode* head, int k) {
                ListNode *o=head;

                int anss=counth(o);

        if(head==NULL){
            return NULL;
        }
        if(k==0 || anss==k){
            return head;
        }
        
        ListNode *p=head;
        ListNode *l=head;
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=head;
        int store;
        // cout<<anss<<"ams";
        if((anss-k)<0){
            store=abs(k%anss);
            // cout<<store<<"Stre";
        anss=anss-store;}
        else{
            anss=anss-k;
        }
                        // cout<<anss<<"   ";

       for(int i=0;i<anss;i++){
            // cout<<"enered";
            l=head;
            head=head->next;
        }
        // cout<<l->val<<"l valy";
        l->next=NULL;
        
        // l->next=h?ead;
        
        // l->next=NULL;
        // cout<<p->val;
        return head;
    }
};