class Solution {
public:
    int removeDuplicates(int A[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        unordered_map<int, int> m;
        int ret = n;
        int p = 0;
        for(int i=0; i<n; i++)
        {
            if(m[A[i]] >= 2)
            {
                ret--;
                continue;
            }
            m[A[i]]++;
            A[p++] = A[i];
        }
        return ret;
    }
};