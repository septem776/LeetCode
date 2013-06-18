class Solution {
public:
    vector<int> searchRange(int A[], int n, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int index = search(A, 0, n-1, target);
        vector<int> ans;
        ans.clear();
        int first = index, last = index;
        while(first > 0 && A[first-1] == target)
        {
            first = search(A, 0, first-1, target);
        }
        while(last < n-1 && A[last+1] == target)
        {
            last = search(A, last+1, n-1, target);
        }
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
    
    int search(int A[], int start, int end, int target)
    {
        if(start > end)
            return -1;
        int mid = (start+end)/2;
        if(A[mid] == target)
        {
            return mid;
        }
        else if(A[mid] > target)
        {
            search(A, start, mid-1, target);
        }
        else
        {
            search(A, mid+1, end, target);
        }
    }
};