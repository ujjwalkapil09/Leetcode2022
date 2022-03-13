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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL)return NULL;
        ListNode *first=head,*second=head;
        vector<int> a;
        vector<int> b;
        while(first){
            if(first->val>=x){
                b.push_back(first->val);
            }
            else{
                 a.push_back(first->val);

            }
            first=first->next;
        }
        for(auto itr:a){
            // cout<<itr<<" ";
            second->val=itr;
            second=second->next;
        }
        for(auto itrr:b){
            second->val=itrr;
            second=second->next;
        }
        return head;
    }
};