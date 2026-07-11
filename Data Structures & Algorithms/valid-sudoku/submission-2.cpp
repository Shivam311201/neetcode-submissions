class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        vector<int> row(9,0),col(9,0),square(9,0);

        for(int i=0;i<9;i++)
        for(int j=0;j<9;j++)
        {
            if(board[i][j]=='.')
                continue;

            int val=board[i][j]-'0';
            int sqrVal=(i/3)*3+(j/3);
            if((row[i]&(1<<val))||(col[j]&(1<<val))||(square[sqrVal]&(1<<val)))
                return false;
            row[i]|=(1<<val);
            col[j]|=(1<<val);
            square[sqrVal]|=(1<<val);
        }
        return true;
    }
};
