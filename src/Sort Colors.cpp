class Solution {
public:
    void sortColors(int A[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int start = 0, end = n-1;
        for(int i=0; i<=end; )
        {
            if(A[i] == 0)
            {
                swap(A[start], A[i]);
                start++;
                i++;
                continue;
            }
            if(A[i] == 2)
            {
                swap(A[i], A[end]);
                end--;
                continue;
            }
            i++;
        }
    }
};