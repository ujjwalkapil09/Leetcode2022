class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0;
        int j=nums.size()-1;
        cout<<j<<"j";
        int ans=-1;
        while(i<=j){
            int mid=(i+j)/2;
            cout<<nums[mid]<<"mid";
            if(nums[mid]==target){
                cout<<"equal";
                ans= mid;
                break;
            }
            else if(nums[mid]>target){
                j=mid-1;
                cout<<"greater";
            }
            else if(nums[mid]<target){
                cout<<"smaller";
                i=mid+1;
            }
        }
        return ans;
    }
};