class Solution {
public:
    bool issafe(vector<string>& ds,int row,int col,int size){
        int fix_row=row;
        int fix_col=col;
        while(col>=0){
            if(ds[row][col--]=='Q'){
                return false;
            }
        }
        row=fix_row,col=fix_col;
        while(row<size && col>=0){
                if(ds[row++][col--]=='Q'){
                    return false;
            }
        }
        row=fix_row,col=fix_col;
        while(row>=0 && col>=0){
                if(ds[row--][col--]=='Q'){
                    return false;
            }
        }
        return true;
        
    }
        void func(int size,vector<vector<string>> & ans,vector<string>&ds,
                 int row,int col){
            if(col==size){
                ans.push_back(ds);
                return ;
            }
        for(int i=0;i<size;i++){
            if(issafe(ds,i,col,size)){
                ds[i][col]='Q';
                func(size,ans,ds,0,col+1);
                ds[i][col]='.';
            }
            
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> answer;
        vector<string>ds(n);
        string a(n,'.');
        for(int i=0;i<n;i++){
            ds[i]=a;
        }
        func(n,answer,ds,0,0);
        return answer;
    }
};