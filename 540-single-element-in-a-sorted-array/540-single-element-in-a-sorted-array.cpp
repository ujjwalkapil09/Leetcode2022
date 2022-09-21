class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int dup=nums[0];
        if(nums.size()==1)return dup;
        // if(nums.size)
        int i;
        if(nums[0]!=nums[1])return nums[0];
        for( i=1;i<nums.size()-1;i++){
            if(nums[i]==nums[i-1] || nums[i]==nums[i+1]){
                continue;
            }
            else{
                break;
                
            }
        }
        return nums[i];
    }
};