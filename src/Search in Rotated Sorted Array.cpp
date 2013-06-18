class Solution {
public:
    int search(int A[], int n, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int ret = -1;
        int index = 0;
        if(A[0] == target)
            return 0;
        else if(A[0] < target)
        {
            index = 1;
            while(index < n)
            {
                if(target == A[index])
                {
                    return index;
                }
                if(index+1<n && (A[index] > A[index+1] || A[index+1] > target))
                {
                    return -1;
                }
                index++;
            }
            return -1;
        }
        else
        {
            index = n-1;
            while(index>=1)
            {
                if(target == A[index])
                {
                    return index;
                }
                if(index-1>=0 && (A[index-1] > A[index] || A[index-1] < target))
                    return -1;
                index--;
            }
            return -1;
        }
    }
};