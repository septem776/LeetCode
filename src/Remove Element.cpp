class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(n == 0)
            return n;
        int end = n-1;
        for(int i=0; i<n; i++)
        {
            if(A[i] == elem)
            {
                n--;
                swap(A[end--], A[i]);
                i--;
            }
        }
        return n;
    }
};