class Solution {
public:

    bool isValid(vector<vector<char>>& board,int row,int col,char ch){
        for(int i=0;i<9;i++){
            if(board[i][col]==ch) return false;
            if(board[row][i]==ch) return false;
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==ch) return false;
        }
        return true;
    }


    bool solve(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){       // traversing the matrix rows
            for(int j=0;j<9;j++){   // traversing the matric columns
                if(board[i][j]=='.'){ // checking for empty cells
                    for(char ch='1';ch<='9';ch++){ // inserting every element from 1-9 in the cell.
                        if(isValid(board,i,j,ch)==true){ // checking that the current digit id valid or not.
                            board[i][j]=ch; // if character is valid, insert it in that empty cell.
                            if(solve(board)==true) return true; // call for next recursion.
                            else board[i][j]='.'; // remove character while backtracking.
                        }
                    }
                return false;
                }
            }
        }
        return true;
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};