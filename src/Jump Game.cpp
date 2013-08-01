class Solution {
public:
    bool canJump(int A[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int far = 0;
        for(int i=0; i<n-1; i++)
        {
            far = max(far, i+A[i]);
            if(far <= i)
                return false;            
        }
        if(far >= n-1)
            return true;
        else
            return false;
    }
};