class Solution {
public:
    void findCom(int ind ,int target,vector<int>&arr, vector<vector<int>> &ans,vector<int> &ds){
        if(target==0){
            ans.push_back(ds);
            return ;
        }
        if(ind==arr.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return ;
        }
        if(target==0){
            ans.push_back(ds);
            return ;
        }
        //pick
        if(arr[ind]<=target){
            ds.push_back(arr[ind]);
            findCom(ind,target-arr[ind],arr,ans,ds);
            ds.pop_back();
        }
        findCom(ind+1,target,arr,ans,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findCom(0,target,candidates,ans,ds);
        return ans;
    }
};