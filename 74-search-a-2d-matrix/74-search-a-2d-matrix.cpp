class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         if(matrix.size()==1 && matrix[0].size()==1){
//             if(matrix[0][0]==target)return true;
            
//         }
        int width=matrix[0].size()-1;
        for(int i=0;i<matrix.size();i++){
            if(target>=matrix[i][0] && target<=matrix[i][width]){
                int low=0;
                int high=width;
                int mid;
                while(low<=high){
                    mid=low+high;
                    if(matrix[i][mid]==target){
                        return true;
                    }
                    if(matrix[i][mid]<target){
                        low=mid+1;
                    }
                    if(matrix[i][mid]>target){
                        high=mid-1;
                    }
                }
            }
            if(i<matrix.size()-1){
                if(target<matrix[i+1][0] && target>matrix[i][width]){
                    return false;
                }
            }
        }
        return false;
    }
};