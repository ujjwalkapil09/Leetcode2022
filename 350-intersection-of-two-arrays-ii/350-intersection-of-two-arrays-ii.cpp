class Solution {
public:
    int maxele(vector<int>& nums){
        int max=0;
        for(auto itr: nums){
            if(max<itr){
                max=itr;
            }
        }
        return max;
    }
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> answer;
        int i=0,j=0;
        int temp=maxele(nums1)<maxele(nums2)?maxele(nums1):maxele(nums2);
        int *arr1;
        int *arr2;
        arr1=new int[maxele(nums1)+1];
        arr2=new int[maxele(nums2)+1];
        for(int i=0;i<maxele(nums1)+1;i++)arr1[i]=0;
        for(int i=0;i<maxele(nums2)+1;i++)arr2[i]=0;

        for(auto itr: nums1){
            arr1[itr]++;
        }
        for(auto itr: nums2){
            arr2[itr]++;
        }
        // cout<<temp;
        for(int i=0;i<=temp;i++){
            if(arr1[i]!=0 && arr2[i]!=0){
                int ch=arr1[i]<arr2[i]?arr1[i]:arr2[i];
                for(int l=0;l<ch;l++){
                    answer.push_back(i);
                }
            }
        }
        return answer;
    }
};