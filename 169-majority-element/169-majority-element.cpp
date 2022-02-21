class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        sort(nums.begin(),nums.end());
        int check=floor(nums.size()/2);
        // cout<<check;
        int duplicate=nums[0];
        int count=1;
        int i;
        for(i=1;i<nums.size();i++){
            // cout<<"count: "<<count;
            if(nums[i]!=duplicate){
                // cout<<"dup";
                if(count>check){
                    // cout<<count;
                    
                    
                    return duplicate;}
                duplicate=nums[i];
                count=1;
                
            }
            else if(nums[i]==duplicate){
                count++;
                // cout<<"No dup";
            }
        }
        return nums[i-1];
    }
};