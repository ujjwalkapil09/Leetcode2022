class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int a[95]={0,0,0};
        int counter=0;
        int q=0,i;
        for(;q<s.length();q++){
            // cout<<endl;
            i=q;
        for(;i<s.length();i++){
            // cout<<i<<"->";
            if(a[s[i]-32]==0)
            a[s[i]-32]++;
            else{
                int temp=0;
                for(i=0;i<95;i++){
                    if(a[i]==1){
                        // cout<<i;
                        // cout<<pp;
                        temp++;
                        a[i]=0;
                }
                if(counter<temp){
                    counter=temp;
                }
            }
                i=q;
                break;
        }
            // q+=1;
        }
        }
        // cout<<counter;
        int temp=0;
                for(int i=0;i<95;i++){
                    if(a[i]==1){
                        // cout<<i;
                        // cout<<pp;
                        temp++;
                        a[i]=0;
                }
                if(counter<temp){
                    counter=temp;
                }
            }
        cout<<counter;
        if(s.length()>0 && counter==0){
            counter=s.length();
        }
        return counter;
    }
};