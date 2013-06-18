class Solution {
public:
    int removeDuplicates(int A[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(n == 0 || n == 1)
            return n;
        int ret = 0;
        int pre = 0;
        int old = A[0];
        for(int i=1; i<n; i++)
        {
            if(old != A[i])
            {
                ret++;
                old = A[i];
                swap(A[++pre], A[i]);
            }
        }
        return ret+1;
    }
};