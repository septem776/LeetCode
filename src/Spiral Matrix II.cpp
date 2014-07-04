class Solution {
public:
    vector<vector<int> > generateMatrix(int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int num = 1;
        vector<vector<int> > ret(n, vector<int>(n, 0));
        int dep = 0;
        int x = 0, y = 0;
        int dir[4][2] = {{0,1}, {1, 0}, {0, -1}, {-1, 0}};
        int index = 0;
        while(dep < n*n)
        {
            ret[x][y] = num++;
            if(x+dir[index][0] < 0 || x+dir[index][0] >= n || y+dir[index][1] < 0
                || y+dir[index][1] >= n || ret[x+dir[index][0]][y+dir[index][1]] != 0)
                index = (index+1)%4;
            x += dir[index][0];
            y += dir[index][1];
            dep++;
        }
        return ret;
    }
};