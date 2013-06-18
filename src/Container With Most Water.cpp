class Solution {
public:
    int maxArea(vector<int> &height) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int ret = 0;
        int left = 0, right = height.size()-1;
        while(left < right)
        {
            int area = min(height[left], height[right]) * (right - left);
            if(area > ret)
                ret = area;
            if(height[left] >= height[right])
                right--;
            else
                left++;
        }
        return ret;
    }
};