class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<int> result;
        vector<int>::iterator it1 = numbers.begin();
        int index1 = 1;
        while(it1 != numbers.end())
        {
            vector<int>::iterator it2 = it1;
            int index2 = index1+1;
            while(++it2 != numbers.end())
            {
                if(*it1 + *it2 == target)
                {
                    result.push_back(index1);
                    result.push_back(index2);
                    return result;
                }
                index2++;
            }
            it1++;
            index1++;
        }
    }
};