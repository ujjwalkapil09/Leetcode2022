class Solution {
public:
    string freqAlphabets(string s) {
        string ans;
        for(int i=0;i<s.length();i++){
            string l;
            int o=i+2;
            // if(s[o]!='\0'){
            if(s[i+1]!='\0'  && s[o]=='#'){
                l+=s[i++];
                l+=s[i++];
                stringstream ss;
                int u=0;
                ss<<l;
                ss>>u;
                ans+=u+96;
                
            }
            else{
                l+=s[i];
                stringstream ss;
                int u=0;
                ss<<l;
                ss>>u;
                ans+=u+96;
                
            }
            // }
        }
        return ans;
    }
};