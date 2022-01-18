class Solution {
public:
    int addDigits(int num) {
        stringstream ss;
        ss<<num;
        string a;
        ss>>a;
        int ans=0;
         if(a.length()==1){
            return num;
        }
        while(a.length()!=1){
            ans=0;
            for(int i=0;i<a.length();i++){
                int ne;
                            stringstream ii;
                ii<<a[i];
                ii>>ne;
                ans+=ne;

            }
            int convert=ans;
            stringstream v;
            v<<convert;
            v>>a;
            
            
        }
       
        return ans;
    }
};