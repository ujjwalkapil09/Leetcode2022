class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> arr;
for(int i=0;i<nums.size();i++){
    int j=(i+1)%nums.size();
    for(;j!=i;j=(j+1)%(nums.size())){
        if(nums[i]<nums[j]){
            arr.push_back(nums[j]);
            break;
      
        }
    }
    if(j==i){
        arr.push_back(-1);

    }
}
        return arr;
    }
};