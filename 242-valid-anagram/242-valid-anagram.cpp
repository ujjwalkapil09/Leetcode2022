class Solution {
public:
    bool isAnagram(string s, string t) {
        int ch[27]={0,0,0};  
        if(s.length()>t.length())return false;
        for(int i=0;i<s.length();i++){
            ch[s[i]-97]++;
        }
        for(int j=0;j<t.length();j++){
            if(ch[t[j]-97]>0){
            ch[t[j]-97]--;
            }
            else{
                return false;
            }
        }
        // for(int p=0;p<27;p++){
        //     if()
        // }
        return true;
    }
};