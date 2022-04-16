class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int arr[27]={0,0,0,0};
        for(int i=0;i<ransomNote.length();i++){
            arr[ransomNote[i]-97]++;
        }
        for(int i=0;i<magazine.length();i++){
            arr[magazine[i]-97]--;
        }
        for(int i=0;i<27;i++){
            if(arr[i]>0){
                return false;
            }
        }
        return true;
    }
};