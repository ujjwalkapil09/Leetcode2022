class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int len=s.length()-1;
        if(s.length()==1)return 1;
        int f=len;
                int count =0;

        while(s[f]==' '){
            f--;
            if(f<0)return count;
        }
        while(s[f]!=' '){
            f--;
            count++;
            if(f<0)return count;
        }
        cout<<s[f];
        return count;
    }
};