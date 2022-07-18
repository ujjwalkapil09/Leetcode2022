class Solution {
    public:
    void recur(int index,vector<int> &nums,set<vector<int>>& answer){
        if(index==nums.size()){
            answer.insert(nums);
            return ;
        }
        for(int i=index;i<nums.size();i++){
            swap(nums[index],nums[i]);
            recur(index+1,nums,answer);
            swap(nums[index],nums[i]);
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> temp;
        recur(0,nums,temp);
        vector<vector<int>> answer;
        for(auto itr: temp){
            answer.push_back(itr);
            
        }
        return answer;
        
    }
};