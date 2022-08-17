class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0,k=0;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                i++;
            }
            else{
                int temp=nums1[i];
                nums1[i]=nums2[j];
                nums2[j]=temp;
                i++;
                sort(nums2.begin(),nums2.end());
            }
            
        }
        sort(nums2.begin(),nums2.end());
         j=0;
        for(int i=m;i<nums1.size();i++){
            nums1[i]=nums2[j++];
        }
    }
};