class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        memcpy(A+m, B, n*sizeof(int));
        sort(A, A+m+n);
    }
};