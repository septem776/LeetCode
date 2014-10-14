class Solution {
public:
    int maximalRectangle(vector<vector<char> > &matrix) {
        if(matrix.empty())
            return 0;

        vector<vector<int> > height(matrix.size(), vector<int>(matrix[0].size(), 0));

        for(int i=0; i<matrix.size(); i++)
        {
            for(int j=0; j<matrix[0].size(); j++)
            {
                if(matrix[i][j] == '1')
                {
                    if(i > 0)
                    {
                        height[i][j] = height[i-1][j];
                    }
                    height[i][j]++;
                }
            }
        }

        int ret = 0;
        for(int i=0; i<height.size(); i++)
        {
            ret = max(ret, largestRectangleArea(height[i]));
        }

        return ret;
    }

    int largestRectangleArea(vector<int> &height) {
        height.push_back(0);
        stack<int> stk;
        int i = 0;
        int maxArea = 0;
        while(i < height.size()){
            if(stk.empty() || height[stk.top()] <= height[i]){
                stk.push(i++);
            }else {
                int t = stk.top();
                stk.pop();
                maxArea = max(maxArea, height[t] * (stk.empty() ? i : i - stk.top() - 1));
            }
        }
        return maxArea;
    }
};