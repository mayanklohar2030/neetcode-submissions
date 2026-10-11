class Solution {
public:

bool checkRow(int i, int j, vector<vector<char>>&board){
    for(int k=0; k<9; k++){
    if(k!= j && board[i][k]==board[i][j]){
        return true;
    }
    }
    return false;
}
bool checkCol(int i, int j, vector<vector<char>>&board){
    for(int k=0; k<9; k++){
        if(i!=k && board[k][j]==board[i][j]){
            return true;
        }
    }
    return false;
}

bool between(int i, int j, vector<vector<char>>&board){
    i=(i/3)*3;
    j=(j/3)*3;
    int row=i;
    int col=j;
    vector<int>ans(10, 0);
    for( int i=row; i<3+row; i++){
        for(int j=col; j<3+col; j++){
            if(board[i][j]!='.' && ans[board[i][j]-'0']==1){
                return true;

            }
            if(board[i][j]!='.'){
             ans[board[i][j]-'0']=1;
            }

        }
    }
    return false;
}

    bool isValidSudoku(vector<vector<char>>& board) {

        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[0].size(); j++){
                if(board[i][j]!='.' && checkRow(i, j, board)==true){
                    return false;
                }
                if(board[i][j]!='.' && checkCol(i, j, board)==true){
                    return false;
                }

                if(board[i][j]!='.'  && between(i, j, board)==true){
                    return false;
                }

            }
        }
        return true;
        
    }
};
