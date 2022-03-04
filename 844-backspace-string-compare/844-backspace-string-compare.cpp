class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string st1="";
        string st2="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='#'){
                if(st1.length()!=0)st1.pop_back();
                
            }
            else{
                st1+=s[i];
            }
        }
        for(int i=0;i<t.length();i++){
            if(t[i]=='#'){
                 if(st2.length()!=0)st2.pop_back();
                
            }
            else{
                st2+=t[i];
            }
        }
        if(st1==st2)return true;
        else return false;
    }
};