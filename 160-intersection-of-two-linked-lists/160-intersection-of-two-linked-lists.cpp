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
    int count(ListNode * n){
        int a=0;
        while(n){
            a++;
            n=n->next;
        }
        return a;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * a=headA,*b=headB,*c=headA,*d=headB;
        int count1=count(a);
        int count2=count(b);
        ListNode * smaller,*greater;
        if(count1>count2){
             smaller=headB,greater=headA;
        }
        else{
            smaller=headA,greater=headB;
        }
        int differ =(count1>count2)?count1-count2:count2-count1;
        while(differ--){
            greater=greater->next;
        }
        cout<<smaller->val;
        while(smaller && greater){
            if(smaller==greater){
                return greater;
            }
            smaller=smaller->next;
            greater=greater->next;
        }
        // cout<<differ;
        return NULL;
    }
};