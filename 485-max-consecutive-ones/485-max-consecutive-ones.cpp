class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int bigcount=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                bigcount=max(bigcount,count);
                count=0;
            }
            else{
                count++;
            }
        }
        bigcount=max(bigcount,count);
        return bigcount;
    }
};