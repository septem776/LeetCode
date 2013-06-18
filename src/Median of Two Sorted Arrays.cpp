class Solution {
public:
    double findMedianSortedArrays(int A[], int m, int B[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int C[m+n];
        int i=0, j=0, k=0;
        while(k<m+n)
        {
            if(i<m && j<n)
            {
                C[k++] = A[i]<B[j]?A[i++]:B[j++];
                
            }
            else if(i>=m && j<n)
            {
                C[k++] = B[j++];
            }
            else if(i<m && j>=n)
            {
                C[k++] = A[i++];
            }
        }
        if((m+n)%2 == 0)
            return (double)(C[(m+n)/2-1] + C[(m+n)/2]) / 2.0;
        else
            return C[(m+n-1)/2];
    }
};