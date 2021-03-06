class Solution {
public:
    int jump(int A[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int from = 0, to = 0;
        int ret = 0;
        if(n < 2)
            return 0;
        while(from < n-1)
        {
            int far = A[from] + from;
        	ret++;
            
            if(far >= n-1)
                return ret;
        	for(int i=from+1; i<=far; i++)
        	{
        		if(A[i] + i > to)
        		{
        			to = A[i] + i;
        			from = i;	
        		}
        	}
        	
        }
        return ret;
    }
};