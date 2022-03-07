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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *a=head;
        ListNode * ll,*last,*temp;
        vector<int> answer;
        a=a->next;
        int sum=0;
       while(a){
           if(a->val==0){
               answer.push_back(sum);
               sum=0;
                          a=a->next;

               
           }
           else{
               sum+=a->val;
                          a=a->next;

           }
       } 
        if(answer.size()!=0){
            ll=new ListNode;
            ll->val=answer[0];
            ll->next=NULL;
            last=ll;
            int i=1;
            for(;i<answer.size();i++){
                temp=new ListNode;
                temp->val=answer[i];
                temp->next=NULL;
                last->next=temp;
                last=temp;
                
                
            }
        }
        return ll;
    }
};