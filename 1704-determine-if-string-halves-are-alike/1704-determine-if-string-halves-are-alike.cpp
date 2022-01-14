class Solution {
public:
    bool halvesAreAlike(string s) {
        int len=s.length()/2;
        string a,b;
        for(int i=0;i<len;i++){
            a+=s[i];
            b+=s[i+len];
        }
        int aa=0,bb=0;
        for(int l=0;l<len;l++){
            if(a[l]=='a'||a[l]=='A' || a[l]=='e'|| a[l]=='E' || a[l]=='i'||a[l]=='I'|| a[l]=='o'|| a[l]=='O'|| a[l]=='u'|| a[l]=='U'){
                aa++;
            }
            if(b[l]=='a'||b[l]=='A' || b[l]=='e'|| b[l]=='E' || b[l]=='i'||b[l]=='I'|| b[l]=='o'|| b[l]=='O'|| b[l]=='u'|| b[l]=='U'){
                bb++;
            }
            
        }
        if(aa==bb){
            return true;
        }
        else{
            return false;
        }
    }
};