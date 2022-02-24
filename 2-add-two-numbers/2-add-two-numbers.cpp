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
        ListNode *l4=NULL,*l5,*l6=NULL;
        vector<int> first;
        vector<int> second;
        while(l1){
            first.push_back(l1->val);
            l1=l1->next;
        }
        while(l2){
            second.push_back(l2->val);
            l2=l2->next;
        }
        vector<int> answer;
        int reminder=0;
        int sum=0;
        int last_hold;
        int i;
        int small=min(first.size(),second.size());
        for(i=0;i<small;i++){
            sum=0;
            int temp=0;
            temp+=reminder;
            temp+=(first[i]+second[i]);
            if(temp<10){
                reminder=0;
            }
            if(temp==10){
                reminder=1;
                temp=0;
            }
            sum=temp;
            if(temp>10){
                temp=temp%10;
                reminder=floor(sum/10);
            }
            sum+=temp;
            answer.push_back(temp);
        }
         if(second.size()==first.size() && reminder>0){
                answer.push_back(reminder);
            }
        while(i<first.size()){
            sum=0;
             int temp=0;
            temp+=reminder;
            temp+=first[i];
            if(temp<10){
                reminder=0;
            }
            if(temp==10){
                reminder=1;
                temp=0;
            }
            sum=temp;
            if(temp>10){
                temp=temp%10;
                reminder=floor(sum/10);
            }
            sum+=temp;
            answer.push_back(temp);
            i++;
            if(i==first.size() && reminder>0){
                answer.push_back(reminder);
            }
        }
        while(i<second.size()){
            sum=0;
            int temp=0;
            temp+=reminder;
            temp+=(second[i]);
            if(temp<10){
                reminder=0;
            }
            if(temp==10){
                reminder=1;
                temp=0;
            }
            sum=temp;
            if(temp>10){
                temp=temp%10;
                reminder=floor(sum/10);
            }
            sum+=temp;
            // cout<<sum;
            last_hold=reminder;
            answer.push_back(temp);
            i++;
            if(i==second.size() && reminder>0){
                answer.push_back(reminder);
            }
        }
        l4=new ListNode;
        l4->val=answer[0];
        l4->next=NULL;
        l5=l4;
        int j=1;
        while(j<answer.size()){
            l6=new ListNode;
            l6->val=answer[j];
            l6->next=NULL;
            l5->next=l6;
            l5=l6;
            l6=NULL;
            j++;
            
        }
        
return l4;
    }
};