class Solution {
public:
    int trap(int A[], int n) {
        if(n < 2)
            return 0;

        int sum = 0;
        vector<int> left(n, 0), right(n, 0);
        int maxheight = 0;
        for(int i=0; i<n; i++)
        {
            if(A[i] > maxheight)
                maxheight = A[i];
            left[i] = maxheight;
        }
        maxheight = 0;
        for(int i=n-1; i>=0; i--)
        {
            if(A[i] > maxheight)
                maxheight = A[i];
            right[i] = maxheight;
        }

        for(int i=1; i<n-1; i++)
        {
            sum += min(left[i], right[i]) - A[i];
        }
        return sum;
    }
};