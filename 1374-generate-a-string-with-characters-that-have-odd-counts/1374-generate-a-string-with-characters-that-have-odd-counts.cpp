class Solution {
public:
    string generateTheString(int n) {
        string ans="";
        if(n%2==0){
            string u;
            for(int j=0;j<n-1;j++){
            ans+='a';}
            ans+='b';
        }
        else{
            string u;
            for(int j=0;j<n;j++){
            ans+='a';}
            ans+=u;
            
        }
        return ans;
    }
};