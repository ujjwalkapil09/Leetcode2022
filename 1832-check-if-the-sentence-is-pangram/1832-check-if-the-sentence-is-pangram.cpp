class Solution {
public:
    bool checkIfPangram(string sentence) {
        int arr[26]={0};
        for(int i=0;i<sentence.length();i++){
            arr[sentence[i]-97]++;
        }
        for(auto itr:arr){
            if(itr==0){
                return false;
                break;
            }
        }
        
        return true;
    }
};