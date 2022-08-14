class Solution {
    private:
    void permutation(int freq[],vector<vector<int>>& answer,vector<int> & temp,vector<int> &nums,int index)
    {
        if(temp.size()==nums.size()){
            answer.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(freq[i]!=1){
                temp.push_back(nums[i]);
                freq[i]=1;
                permutation(freq,answer,temp,nums,index+1);
                freq[i]=0;
                temp.pop_back();
            }
        }
        return ;
    }
public:
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        int *arr;
        arr=new int[nums.size()]{0};
        vector<vector<int>> answer;
        vector<int> temp;
        permutation(arr,answer,temp,nums,0);
        return answer;
    }
};