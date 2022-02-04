class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int Bigsum=nums[0];
        int maxsum=0;
        for(int i=0;i<nums.size();i++){
            maxsum=maxsum+nums[i];
            if(maxsum>Bigsum)Bigsum=maxsum;
            if(maxsum<0)maxsum=0;
        }
        
        return Bigsum;
    }
};