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
//     int length(ListNode *i){
//         int len=0;
//         while(i){
//             len++;
//             i=i->next;
//         }
//         return len;
        
//     }
    int op;
    void detect(ListNode* p){
        ListNode*a=p,*u=p,*aa=p;
        int count=0;
        do{
            // cout<<"test"<<"\t";
            u=u->next;
            count++;
            a=a->next;
            if(a->next!=NULL){
                a=a->next;
            }
            if(a==u)break;
        }while(u && a && a!=u);
//         cout<<u->val<<"  "<<a->val<<"after while";
//         // cout<<count<<" _ ";
//         if(u==a){
//             if(count==2){cout<<"tail connects to node index ";
//             op= u->val;
//             return;  }
//             if(count==1){
//                 cout<<"no cycle";
//                         op= -111111;
//             return ;
//             }
//             a=a->next;
//             // u=u->next;
//             cout<<"tail connects to node index ";
//             op= a->val;
//             return;
            
//         }
//         else{
            // cout<<"no cycle";
            //             op= -111111;
            // return ;

//         }
        do{
            if(aa==a){
                break;
            }
            aa=aa->next;
            a=a->next;
        }while(a && aa && a!=aa);
        // op=aa->val;
        cout<<aa->val;
        if(aa==a){
            // cout<<"tail connects to node index ";
            op= a->val;
            return;
        }
        else{
            // cout<<"no cycle";
                        op= -111111;
            return ;
        }
    }
    ListNode *detectCycle(ListNode *head) {
        ListNode *check=head,*p=head;
        if(head==NULL){
            // cout<<"no cycle";
            return NULL;
        }
        if(head->next==check){
                        // cout<<"tail connects to node index ";
        return check;
        }
        if(head->next==NULL){
            
            cout<<"no cycle";
            return NULL;
        }
        ListNode *a=p,*u=p,*aa=p;
        // int count=0;
        do{
            // cout<<"test"<<"\t";
            u=u->next;
            // count++;
            a=a->next;
            if(a==NULL)break;
            if(a->next!=NULL){
                a=a->next;
            }
            else{
                break;
            }
            if(a==u)break;
        }while(u && a && a!=u);
        do{
            if(aa==a){
                break;
            }
            // if(a)
            aa=aa->next;
                        if(a==NULL)break;

            a=a->next;
        }while(a && aa && a!=aa);
        return a;
        return NULL;
    }
};