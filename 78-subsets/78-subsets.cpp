class Solution {
public:
    void powerset(vector<vector<int>> &ans,vector<int>& temp,vector<int>&arr
                 ,int ind){
        if(ind==arr.size()){
            ans.push_back(temp);
            return ;
            
        }
        temp.push_back(arr[ind]);
        powerset(ans,temp,arr,ind+1);
        temp.pop_back();
        powerset(ans,temp,arr,ind+1);
        return ;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> answer;
        vector<int> temp;
        powerset(answer,temp,nums,0);
        return answer;
    }
};