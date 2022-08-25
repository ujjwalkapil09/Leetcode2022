class Solution {
public:
    int func(int m,int n,int x,int y,vector<vector<int>> &dp){
        if(x==m-1 && y==n-1)return 1;
        if(x>m-1 || y>n-1)return 0;
        if(dp[x][y]!=-1)return dp[x][y];
        else return dp[x][y]=func(m,n,x+1,y,dp)+func(m,n,x,y+1,dp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp;
        for(int i=0;i<m;i++){
            vector<int> c;
            for(int j=0;j<n;j++){
                c.push_back(-1);
            }
            dp.push_back(c);
        }
        return func(m,n,0,0,dp);
    }
};