class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int temp=-101;
        int index=-1;
        for(int i=0;i<nums.size();i++){
            if(temp==nums[i]){
                if(nums[index]==nums[i]){
                    continue;
                }
            }
            else{
                index++;
                nums[index]=nums[i];
                temp=nums[i];
                // index++;
            }
            
        }
        // cout<<index;
        // for(auto itr: nums){
        //     cout<<itr<<" ";
        // }
        return index+1;;
    }
};