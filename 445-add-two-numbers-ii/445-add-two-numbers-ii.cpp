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
        stack<int>st1;
        stack<int>st2;
        stack<int>q;
        while(l1  && l2){
            st1.push(l1->val);
            l1=l1->next;
            st2.push(l2->val);
            l2=l2->next;
        }
        while(l1){
            st1.push(l1->val);
            l1=l1->next;
        }
        while(l2){
            st2.push(l2->val);
            l2=l2->next;
        }
        int reminder=0;
        while(!st1.empty() && !st2.empty() ){
            int temp=st1.top()+st2.top()+reminder;
            // cout<<temp<<" ";
            st1.pop();
            st2.pop();
            // temp+=reminder;
            if(temp>10){
                cout<<temp%10<<" ";
                q.push(temp%10);
                reminder=1;
            }
            else if(temp==10){
                q.push(0);
                reminder=1;
            }
            else{
                reminder=0;
                q.push(temp);
                
            }
        }
        while(!st1.empty())
        {
         int temp=st1.top()+reminder;
            st1.pop();
            
            // st2.pop();
            // temp+=reminder;
            if(temp>10){
                q.push(temp%10);
                reminder=temp/10;
            }
            else if(temp==10){
                q.push(0);
                reminder=1;
            }
            else{
                reminder=0;
                q.push(temp);
                
            }  
            
        }
        
        while(!st2.empty())
        {
         int temp=st2.top()+reminder;
            st2.pop();
            // st2.pop();
            // temp+=reminder;
            if(temp>10){
                q.push(temp%10);
                reminder=temp/10;
            }
            if(temp==10){
                q.push(0);
                reminder=1;
            }
            else{
                reminder=0;
                q.push(temp);
                
            }   
        }
        if(st1.empty() && st2.empty() && reminder>=1){
            q.push(reminder);
        }
        ListNode * first,*last,*temp;
        first=new ListNode;
        first->val=q.top();
        first->next=NULL;
        last=first;
        q.pop();
        while(!q.empty()){
            temp=new ListNode;
            temp->val=q.top();
            last->next=temp;
            last=temp;
            q.pop();
        }
        return first;
    }
};