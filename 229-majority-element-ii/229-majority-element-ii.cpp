class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int sz=nums.size();
        int num1=-1,num2=-1;
        int count1=0;
        int count2=0;
        for(int i=0;i<sz;i++){
            if(nums[i]==num1){
                count1++;
            }
            else if(nums[i]==num2){
                count2++;
            }
            else if(count1==0){
                num1=nums[i];
                count1=1;
                
            }
            else if(count2==0){
                num2=nums[i];
                count2=1;
            }
            else {
                count1--;
                count2--;
            }
        }
        vector<int> ans;
        count1=count2=0;
        // cout<<num2<<" ";
        for(auto it: nums){
            if(num1==it){
                count1++;
            }
            else if(num2==it){
                count2++;
            }
        }
        // cout<<count1<<" "<<count2;
        if(count1>floor(sz/3)){
            ans.push_back(num1);
        }
        if(count2>floor(sz/3)){
            ans.push_back(num2);
        }
        return ans;
    }
};