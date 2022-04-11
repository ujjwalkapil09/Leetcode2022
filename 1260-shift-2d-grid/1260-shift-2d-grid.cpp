class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>> &grid, int k)
{
        if(grid.size()==1 && grid[0].size()==1)return grid;
    //         Element at grid[i][j] moves to grid[i][j + 1].
    // Element at grid[i][n - 1] moves to grid[i + 1][0].
    // Element at grid[m - 1][n - 1] moves to grid[0][0].
    vector<vector<int>> answer;

    for (int i = 0; i < grid.size(); i++)
    {
        vector<int> row;
        for (int j = 0; j < grid[i].size(); j++)
        {
            row.push_back(0);
        }
        answer.push_back(row);
        // cout<<endl;
    }
    for (int l = 0; l < k; l++)
    {
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[i].size(); j++)
            {
                if (i == grid.size() - 1 && j == grid[i].size() - 1)
                {
                    answer[0][0] = grid[i][j];
                }
                else if (j == grid[i].size() - 1)
                {
                    answer[i + 1][0] = grid[i][j];
                }
                else
                {
                    answer[i][j + 1] = grid[i][j];
                }
            }
        }
        for(int m=0;m<grid.size();m++){
            for(int n=0;n<grid[m].size();n++){
                grid[m][n]=answer[m][n];
            }
        }
    }
    return answer;
}
};