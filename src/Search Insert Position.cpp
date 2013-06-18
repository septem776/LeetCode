class Solution {
public:
    int searchInsert(int A[], int n, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int ret = bsearch(A, 0, n-1, target);
        return ret;
    }
    
    int bsearch(int A[], int start, int end, int target)
    {
        if(start >= end)
        {
            if(A[start] >= target)
                return start;
            else
                return start+1;
        }
        int mid = (start+end)/2;
        if(A[mid] > target)
        {
            bsearch(A, start, mid-1, target);
        }
        else if(A[mid] < target)
        {
            bsearch(A, mid+1, end, target);
        }
        else
            return mid;
    }
};