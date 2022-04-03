class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> first;
        int top=0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                first.push_back(i);
                    top=1;
                first.push_back(j);
                break;
                }
            }
           if(top==1) break;
        }
        return first;
    }
};