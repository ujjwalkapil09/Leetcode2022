class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        for(auto itr:nums){
            ans.push_back(itr*itr);
            
            
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};