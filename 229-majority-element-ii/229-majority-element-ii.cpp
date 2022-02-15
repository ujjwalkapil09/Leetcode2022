class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int s=floor(nums.size()/3);
        sort(nums.begin(),nums.end());
        int last_dup=nums[0];
        int count=1;
        // cout<<s<<"  ";
        // if()
        vector<int> ans;
        for(int i=1;i<nums.size();i++){
            
            if(last_dup!=nums[i]){
                // cout<<"\n"<<count;
                if(s<count){
                ans.push_back(last_dup);}
                last_dup=nums[i];
                
            
                count=1;
                
                // continue;
            }
            
            else if(last_dup==nums[i]){
                // cout<<"r"<<nums[i];
                count++;
                
            }
        }
        if(s<count){
                ans.push_back(last_dup);}
        return ans;
        
    }
};