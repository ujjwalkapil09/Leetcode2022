
class Solution {
public:
    int count(ListNode *p){
        int c=0;
        while(p){
            c++;
            p=p->next;
        }
        return c;
    }
    void reorderList(ListNode* head) {
        ListNode *first=head,*second=head,*third=head,*finnal=head;
        vector<int> v; 

        stack<ListNode*> st;
        int len=count(first);
        if(len==1)return ;
        int i=0;
        while(i<len/2){
            second=second->next;
            i++;
        }
        for(i=floor(len/2);i<len;i++){
            st.push(second);
            second=second->next;
        }
        ListNode *question,*last, *neww;
        v.push_back(third->val);
        third=third->next;

        while(!st.empty()){
            v.push_back(st.top()->val);
            st.pop();
            v.push_back(third->val);
            third=third->next;
            
        }
        
        for(int j=0;j<len;j++){
            // question=v[j];
            // cout<<v[j]->val;
            head->val=v[j];
            head=head->next;
        }
    }
};