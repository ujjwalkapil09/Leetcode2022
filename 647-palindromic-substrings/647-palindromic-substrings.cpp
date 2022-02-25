class Solution {
public:
    int isPalendrome(int s,int e,string c){
        int count=0;
        while(s>=0 && e<=c.length() && c[s--]==c[e++]){
            count++;
        }
        return count;
    }
    int countSubstrings(string s) {
        if(s.length()==0)return 0;
        int n=s.length();
        string c=s;
//         char *c;
//         c=new char[n];
        
//         for(int i=0;i<s.length();i++){
//             c[i]=s[i];
//         }
        cout<<c[s.length()-1];
        int res=0;
        for(int i=0;i<n;i++){
        res+=isPalendrome(i,i,c);
        res+=isPalendrome(i,i+1,c);
            
            }
        return res;
    }
};