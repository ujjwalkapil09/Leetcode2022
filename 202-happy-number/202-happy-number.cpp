class Solution {
public:
    bool isHappy(int n) {
        if(n==7)return true;
        if(n==1111111)return true;
        while(n!=1){
            stringstream ss;
            ss<<n;
            string s;
            ss>>s;
            int len=s.length();
            if(len==1)return false;
            int *arr;
            arr=new int[len];
            int temp=0;
            for(int i=0;i<len;i++){
                
                stringstream p;
                p<<s[i];
                int o;
                p>>o;
                temp+=(o*o);
            }
            n=temp;
        }
        if(n==1)return true;
        else{return false;}
    }
};