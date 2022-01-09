class Solution {
public:
    int shift(char u ,int a){
    int w;
        stringstream aa;
        aa<<u;
        aa>>w;
        int ans=0;
        ans=w+a;
        // cout<<ans<<"as";
        return ans;
        
    }
    string replaceDigits(string s) {
        string q;
        for(int i=0;i<s.length();i++){
            int h=0;
            if(i%2==0){
                // h=s[i];
                q+=s[i];

            }
            else{
                                // cout<<h<<"h ";
                h=s[i-1];
                // cout<<"\t"<<shift(s[i],h)<<"t";
                q+=shift(s[i],h);
            }
        }
        return q;
    }
};