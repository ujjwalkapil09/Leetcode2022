class Solution {
public:
    void Subset_non(set<vector<int>> &answer,vector<int> &temp,vector<int>arr,int ind){
        if(ind==arr.size()){
            answer.insert(temp);
            return ;
        }
        temp.push_back(arr[ind]);
        Subset_non(answer,temp,arr,ind+1);
        temp.pop_back();
        Subset_non(answer,temp,arr,ind+1);
        return ;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> Fans;
        set<vector<int>> answer;
        vector<int> temp;
        Subset_non(answer,temp,nums,0);
        for(auto itr: answer){
            Fans.push_back(itr);
        }
        return Fans;
    }
};