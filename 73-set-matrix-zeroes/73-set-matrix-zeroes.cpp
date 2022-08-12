class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int >> v;
        vector<vector<int>> temp;
        for(int i=0;i<matrix.size();i++){
            vector<int>still;
            for(int j=0;j<matrix[i].size();j++){
                still.push_back(matrix[i][j]);
            }
            temp.push_back(still);
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    v.push_back(make_pair(i,j));
                }
            }
        }
        for(int i=0;i<v.size();i++){
            for(int ii=0;ii<matrix[0].size();ii++){
            temp[v[i].first][ii]=0;
            }
            for(int ii=0;ii<matrix.size();ii++){
            temp[ii][v[i].second]=0;
            }
        }
        matrix=temp;
    }
};