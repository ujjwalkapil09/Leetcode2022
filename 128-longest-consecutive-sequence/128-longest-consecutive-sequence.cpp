class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==0)return 0;
        if(nums.size()==1)return 1;
        int temp=nums[0];
        int count=1;
        int pcount=0;
        for(int i=1;i<nums.size();i++){
            if(i>0){
                temp=nums[i-1];
            }
            
            if(temp+1==nums[i]){
                count++;
                // cout<<temp<<" "<<nums[i]<<" "<<count<<"-";
                // cout<<"enter";
            }
            else if(temp==nums[i])continue;
            else{
                if(pcount<count){
                    pcount=count;
                    count=1;
                }
                else{
                count=1;
                }
            }
        }
        cout<<"\n"<<count;
        if(pcount<count){
                    pcount=count;
                    count=0;
                }
        return pcount;
    }
};