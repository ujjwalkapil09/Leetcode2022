class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans="";
        int i;
        int flag=0;
        for( i=0;i<word.length();i++){
            ans+=word[i];
            if(word[i]==ch){
                flag=1;
            break;
            
            }
        }
        // cout<<ans<<"   ";
        reverse(ans.begin(),ans.end());
                // cout<<ans<<"   ";

        i++;
        for(;i<word.length();i++){
            ans+=word[i];
        }
        if(flag==1)return ans;
        else return word;
    }
};