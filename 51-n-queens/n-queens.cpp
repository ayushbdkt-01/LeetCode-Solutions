class Solution {
public:

    bool canPlace(int row,int col,vector<string> &ans,int n){
        int tempRow=row;
        int tempCol=col;
        while(tempRow>=0 && tempCol>=0){
            if(ans[tempRow][tempCol]=='Q') return false;
            tempRow--;
            tempCol--;
        }

        tempRow=row;
        tempCol=col;
        while(tempCol>=0){
            if(ans[tempRow][tempCol]=='Q') return false;
            tempCol--;
        }

        tempRow=row;
        tempCol=col;
        while(tempRow<n && tempCol>=0){
            if(ans[tempRow][tempCol]=='Q') return false;
            tempRow++;
            tempCol--;
        }
        return true;
    }


    void solve(int col,vector<string> &ans,vector<vector<string>> &finalAns,int n){
        if(col==n){
            finalAns.push_back(ans);
            return;
        }
        for(int row=0;row<n;row++){
            if(canPlace(row,col,ans,n)==true){
                ans[row][col]='Q';
                solve(col+1,ans,finalAns,n);
                ans[row][col]='.';
            }
        }
    }


    vector<vector<string>> solveNQueens(int n) {
        // vector<string> ans(n);
        // for(int i=0;i<n;i++) ans[i]='.';
        vector<string> ans(n, string(n, '.'));
        vector<vector<string>> finalAns;
        solve(0,ans,finalAns,n);
        return finalAns;
    }
};