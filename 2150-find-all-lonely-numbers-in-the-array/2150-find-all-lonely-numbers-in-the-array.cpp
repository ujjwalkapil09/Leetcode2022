class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
      int max=0;
        vector<int> answer;
        for(auto itr:nums){
            if(max<itr){
                max=itr;
            }
        }
        int arr[max+2];
        // arr =new int[max+2];
        for(int i=0;i<max+2;i++){
            arr[i]=0;
        }
        for(auto itr:nums){
            arr[itr]++;
        }
        for(int i=0;i<max+2;i++){
            // cout<<arr[i]<<" ";
            if(arr[i]==1)
            {
                if(arr[i+1]==0 ){
                    if(i>0){
                        if(arr[i-1]==0){
                               answer.push_back(i);   

                        }
                    }
                    else{
                        answer.push_back(i);
                    }
                    
                }
                    
            }
        }
        return answer;
    }
};