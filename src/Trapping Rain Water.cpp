class Solution {
public:
    int trap(int A[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(n < 2)
            return 0;
        
        int sum = 0;
        int highleft = 0, highright = 0;
        for(int i=1; i<n-1; i++)
        {
            highleft = highright = 0;
            for(int j=0; j<i; j++)
            {
                highleft = max(highleft, A[j]);
            }
            for(int j=n-1; j>i; j--)
            {
                highright = max(highright, A[j]);
            }
            if(highleft <= A[i] || highright <= A[i])
                continue;
            sum += min(highleft, highright) - A[i];
            
        }
        return sum;
    }
};