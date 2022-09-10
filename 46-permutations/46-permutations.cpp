class Solution {
public:
    void func(vector<int> &nums,vector<int>temp,vector<vector<int>>&answer,
             int freq[],int index){
        if(temp.size()==nums.size()){
            answer.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!freq[i])
            {
                 temp.push_back(nums[i]);
                freq[i]=1;
                func(nums,temp,answer,freq,index);
                temp.pop_back();
                freq[i]=0;
            }
           
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> answer;
        vector<int>temp;
        int *freq;
        freq=new int[nums.size()+1]{0};
        func(nums,temp,answer,freq,0);
        return answer;
    }
};