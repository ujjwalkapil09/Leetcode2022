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
    ListNode* insertionSortList(ListNode* head) {
        if(head==NULL){
            return head;
        }
        vector<int> an;
        // cout<<"first";
        ListNode* t=head;
        ListNode *y=head;
        while(t){
            // cout<<"second";
            an.push_back(t->val);
            t=t->next;
        }
        sort(an.begin(),an.end());
        int i=0;
        while(y){
            // cout<<"third";
            y->val=an[i++];
            y=y->next;
            
        }
        return head;
    }
};