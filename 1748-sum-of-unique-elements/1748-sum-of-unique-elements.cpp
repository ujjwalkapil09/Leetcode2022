class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int arr[150]={0};
        for(auto itr:nums){
            arr[itr]++;
            cout<<arr[itr];
        }
        int sum=0;
        for(int i=0;i<150;i++){
            if(arr[i]==1){
                sum+=i;
            }
        }
        return sum;
    }
};