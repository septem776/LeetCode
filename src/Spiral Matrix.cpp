class Solution {
public:
    vector<int> spiralOrder(vector<vector<int> > &matrix) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<int> ret;
        if(matrix.empty())
            return ret;
        int dir[4][2] = {{0,1}, {1, 0}, {0, -1}, {-1, 0}};
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<bool> > visited(row, vector<bool>(col, false));
        int dep = 0;
        int direct = 0;
        int x=0, y=0;
        while(dep < row*col)
        {
            ret.push_back(matrix[x][y]);
            visited[x][y] = true;
            if(x+dir[direct][0] < 0 || x+dir[direct][0] >= row || y+dir[direct][1] < 0 
                || y+dir[direct][1] >= col || visited[x+dir[direct][0]][y+dir[direct][1]])
                direct = (direct+1)%4;
            x += dir[direct][0];
            y += dir[direct][1];
            dep++;
        }
        return ret;
       
    }
    
    
};