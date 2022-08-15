class Solution {
public:
    void sortColors(vector<int>& nums) {
        int arr[3]={0,0,0};
        for(int i=0;i<nums.size();i++){
            arr[nums[i]]++;
        }
        int i=0, j=0;
        while(i<3){
            if(arr[i]==0)i++;
            else{
                nums[j++]=i;
                arr[i]--;
            }
        }
        // delete arr;
        
    }
};