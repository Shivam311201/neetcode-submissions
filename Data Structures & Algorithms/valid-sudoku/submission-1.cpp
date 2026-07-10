class Solution {
public:
    bool isPossibleToPlace(int i, int j,vector<vector<char>>& board, char val)
    {
        for(int k=0;k<9;k++)
            if(board[k][j]==val&&k!=i)
                return false;

        for(int k=0;k<9;k++)
            if(board[i][k]==val&&k!=j)
                return false;
        
        int ur=(i/3)*3,uc=(j/3)*3;
        for(int l=ur;l<ur+3;l++)
        for(int m=uc;m<uc+3;m++)
            if((board[l][m]==val)&&(l!=i)&&(m!=j))
                return false;
        return true;
    }
    bool IsRecurValid(int i, int j,vector<vector<char>>& board)
    {
        if(i==9)
            return true;
        if(j==9)
            return IsRecurValid(i+1,0,board);
        if(board[i][j]!='.')
            return IsRecurValid(i,j+1,board);
        for(char k='1';k<='9';k++)
        {
            if(isPossibleToPlace(i,j,board,k))
            {
                board[i][j]=k;
                if(IsRecurValid(i,j+1,board))
                    return true;
            }
        }
        board[i][j]='.';
        return false;
    }
    bool isValidSudoku(vector<vector<char>>& board) {

        for(int i=0;i<9;i++)
        for(int j=0;j<9;j++)
            if(board[i][j]!='.')
                if(!isPossibleToPlace(i,j,board,board[i][j]))
                    return false;
        return true;
    }
};
