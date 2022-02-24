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
// #include<vector>
class Solution {
public:
    int count(ListNode* p){
        int i=0;
        while(p){
            p=p->next;
            i++;
        }
        return i;
    }
    ListNode* sortList(ListNode* head) {
        // vector<int> arr;
        ListNode * p,*last,*q,*first;
        p=head;
        q=head;
        int *arr=new int[count(head)];
        int c=0;
        while(p){
            arr[c]=p->val;
            cout<<arr[c]<<"\n";
            c++;
            p=p->next;
        }
        sort(arr,arr+count(head));
        int pp=0;
        while(q){
            q->val=arr[pp];
            pp++;
            q=q->next;
            
        }
        
        return head;;
        
    }
};