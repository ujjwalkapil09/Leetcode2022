class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int max_gap=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]>max_gap){
                max_gap=nums[i]-nums[i-1];
            }
        }
        return max_gap;
    }
};