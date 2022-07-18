class Solution {
public:
    void permu(vector<vector<int>> &answer,vector<int> &ds
             ,int freq[],vector<int> nums){
        if(ds.size()==nums.size()){
            answer.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i]=1;
                permu(answer,ds,freq,nums);
                freq[i]=0;
                ds.pop_back();
            }
        }
        return;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> answer;
        vector<int> ds;
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++){
            freq[i]=0;
        }
        permu(answer,ds,freq,nums);
        return answer;
    }
};