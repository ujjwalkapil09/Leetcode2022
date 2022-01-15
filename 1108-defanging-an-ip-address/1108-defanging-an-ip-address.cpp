class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        for(int i=0;i<address.length();i++){
            if(address[i]=='.'){
                // cout<<"comp";
                ans+="[.]";
                
            }
            else{
                ans+=address[i];
            }
        }
        return ans;
    }
};