class Solution {
public:
    int firstMissingPositive(int A[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        set<int> s;
        s.clear();
        for(int i=0; i<n; i++)
        {
            if(A[i] > 0)
                s.insert(A[i]);
        }
        set<int>::iterator it = s.begin();
        int i = 1;
        while(it != s.end())
        {
            if(*it != i)
            {
                return i;
            }
            it++;
            i++;
        }
        return i;
    }
};