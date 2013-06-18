class Solution {
public:
    bool isValidSudoku(vector<vector<char> > &board) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        bool ret = true;
        int count[27][10];
        memset(count, 0 ,sizeof(count));
        int n=0;
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                if(board[i][j] != '.')
                    count[n][board[i][j]-'0']++;
            }
            n++;
        }
        for(int j=0; j<9; j++)
        {
            for(int i=0; i<9; i++)
            {
                if(board[i][j] != '.')
                    count[n][board[i][j]-'0']++;
            }
            n++;
        }
        for(int x=0; x<3; x++)
        {
            for(int y=0; y<3; y++)
            {
                for(int i=0; i<3; i++)
                {
                    for(int j=0; j<3; j++)
                    {
                        if(board[i+3*x][j+3*y] != '.')
                            count[n][board[i+3*x][j+3*y]-'0']++;
                    }
                }
                n++;
            }
        }
        for(int i=0; i<27; i++)
        {
            for(int j=0; j<10; j++)
            {
                if(count[i][j] > 1)
                {
                    ret = false;
                    break;
                }
            }
            if(!ret)
                break;
        }
        return ret;
    }
};