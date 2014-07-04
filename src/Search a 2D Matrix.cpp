class Solution {
public:
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int row = matrix.size();
        int col = matrix[0].size();
        int start = 0, end = row-1;
        
        if(target < matrix[0][0])
            return false;
        while(start<=end)
        {
            int mid = (start+end)/2;
            if(target == matrix[mid][0])
                return true;
            if(target > matrix[mid][0])
            {
                start = mid+1;
            }
            else
            {
                end = mid-1;
            }            
        }
        int inrow = end;
        start = 0, end = col-1;
        while(start<=end)
        {
            int mid = (start+end)/2;
            if(target == matrix[inrow][mid])
                return true;
            if(target > matrix[inrow][mid])
                start = mid+1;
            else
                end = mid-1;
        }
        return false;
    }
};