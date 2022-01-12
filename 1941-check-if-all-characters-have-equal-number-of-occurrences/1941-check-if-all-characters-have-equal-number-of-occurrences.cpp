class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int len=s.length();
        int *arr;
        arr=new int[27]{0};
        
        for(int i=0;i<len;i++){
            arr[s[i]-97]++;
            
        }
        int check;
        for(int i=0;i<27;i++){
            // cout<<arr[i];
            if(arr[i]!=0){
                check=arr[i];
                break;
            }
        }
        for(int i=0;i<27;i++){
            if(arr[i]!=0){
                if(arr[i]!=check){
                    return false;
                    
                }
            }
        }
        return true;
    }
    
};