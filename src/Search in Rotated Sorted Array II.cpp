class Solution {
public:
    bool search(int A[], int n, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int left, right, mid;
        left = 0;
        right = n-1;
        while(left <= right)
        {
            mid = (left+right)/2;
            if(target == A[mid])
                return true;
            if(A[left] < A[mid])
            {
                if(target < A[mid] && target >= A[left])
                    right = mid-1;
                else
                    left = mid+1;
            }
            else if(A[left] > A[mid])
            {
                if(target > A[mid] && target <= A[right])
                    left = mid+1;
                else
                    right = mid-1;
            }
            else
                left++;
        }
        return false;
    }
};