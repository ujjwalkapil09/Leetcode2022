class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int temp=arr[0];
        for(int i=1;i<arr.size();i++){
            if(i!=0){
                temp=arr[i-1];
            }
            if(arr[i]<temp){
                return i-1;
            }
        }
        return arr.size()-1;
    }
};