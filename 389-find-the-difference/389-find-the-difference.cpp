class Solution {
public:
    char findTheDifference(string s, string t) {
        int arr[27]={0,0};
        for(int i=0;i<t.length();i++){
            arr[t[i]-97]++;
        }
        for(int j=0;j<s.length();j++){
            arr[s[j]-97]--;
        }
        for(int j=0;j<27;j++){
            if(arr[j]>0)return (char)j+97;
        }
        return 'a';
    }
};