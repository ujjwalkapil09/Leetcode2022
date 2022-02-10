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
    int count(ListNode * i){
        int coun=0;
        while(i){
            coun++;
            i=i->next;
        }
        return coun;
    }
    int pairSum(ListNode* head) {
        if(head==NULL)return 0;
        ListNode* y=head;
        stack<int>st;
        int sum=INT_MIN;
        int c=(count(y)/2);
        // cout<<c<<"fdf"<<"  "<<count(head)<<" ";
        while(c--){
            st.push(head->val);
            head=head->next;
        }
//         while(!st.empty()){
//             cout<<st.top();
//             st.pop();
            
//         }
        while(head){
            int u;
            int s=st.top();
            u=head->val+s;
            if(u>sum){
                sum=u;
            }
            st.pop();
            head=head->next;
            
        }
        
        return sum;
    }
};