class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int min=0;
        int max=nums.size()-1;
        int mid=(min+max)/2;
        while(min<=max){
            if(nums[mid]>target){
                max=mid-1;
                
            }
            if(nums[mid]<target){
                min=mid+1;
            }
            if(nums[mid]==target){
                return mid;
            }
            mid=(min+max)/2;
        }
        if(nums[mid]==target)return mid;

        else{
           if(nums[mid]<target){
                mid++;
            nums.insert(nums.begin()+mid,target);}
            else{
                nums.insert(nums.begin()+mid,target);
            }
        }
       
        // cout<<"\n";
        return mid;
    }

};