class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> out;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            out.push_back(sum);
        }
        return out;
    }
};