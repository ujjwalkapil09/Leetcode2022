class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        // cout<<nums[9-k];
        return nums[nums.size()-k];
    }
};