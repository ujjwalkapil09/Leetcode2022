class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
     int count=0;
        int check=0;
        for(auto itr:nums){
            if(itr==0){
                if(count>=check)check=count;
                count=0;
            }
            else{
                count++;
            }
            // cout<<itr<<" ";
        }
                        if(count>=check)check=count;

        return check;
    }
};