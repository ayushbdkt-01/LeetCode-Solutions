class Solution {
public:
    bool search(int row,int col,vector<vector<char>>& board, string word,int index){
        if(index==word.size()) return true;
        if(row<0 || col<0 || row>=board.size() || col>=board[0].size() || board[row][col]!=word[index]) return false;

        board[row][col]='#';
        int option1=search(row+1,col,board,word,index+1);
        int option2=search(row,col+1,board,word,index+1);
        int option3=search(row-1,col,board,word,index+1);
        int option4=search(row,col-1,board,word,index+1);
        board[row][col]=word[index];

        return (option1 || option2 || option3 ||option4);
    }


    bool exist(vector<vector<char>>& board, string word) {
        int row=board.size();
        int col=board[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(board[i][j]==word[0]){
                    if(search(i,j,board,word,0)==true) return true;
                }
            }
        }
        return false;
    }
};