/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode * next;
 *    ListNode() : val(0), next(nullptr) {}
 *    ListNode(int x) : val(x), next(nullptr) {}
 *    ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        ListNode* mergeTwoLists(ListNode *list1, ListNode *list2)
        {
            if(list1==NULL && list2==NULL)return list1;
            if(list1==NULL)return list2;
            if(list2==NULL)return list1;
            ListNode *p = list1, *q = list2;
            ListNode *start = NULL, *newheader = NULL;
            newheader = start;
            int count = 0;
            while (p && q)
            {
                if (p->val < q->val)
                {
                    if (count == 0)
                    {
                        newheader=start = p;
                    }
                    else
                    {
                        start->next = p;
                        start = start->next;
                    }

                    p = p->next;
                }
                else if (p->val > q->val)
                {
                    if (count == 0)
                    {
                         newheader=start = q;
                    }
                    else
                    {
                        start->next = q;
                        start = start->next;
                    }

                    q = q->next;
                }
                else if(p->val==q->val)
                {
                    if (count == 0)
                    {
                         newheader=start = p;
                        p = p->next;
                    }
                    else
                    {
                        start->next = p;
                        p = p->next;
                        start = start->next;
                    }
                    start->next = q;
                    start = start->next;
                    q = q->next;
                    
                }
                count++;
            }
            while(p){
                start->next=p;
                start=start->next;
                p=p->next;
            }
            while(q){
                start->next=q;
                start=start->next;
                q=q->next;
            }
            return newheader;
        }
};