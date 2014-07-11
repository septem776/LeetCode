class Solution {
public:
    vector<vector<int> > threeSum(vector<int> &num) 
    {
        vector<int> tmp(3);
        vector<vector<int> > rs;
        sort(num.begin(), num.end());

        for (int i = 0; i < num.size(); i++)
        {
            for (int j = i+1, k = num.size()-1; j < k; )
            {
                if (num[i]+num[j]+num[k] < 0) j++;
                else if (num[i]+num[j]+num[k] >0) k--;
                else
                {
                    tmp[0] = num[i]; 
                    tmp[1] = num[j]; 
                    tmp[2] = num[k];
                    rs.push_back(tmp);
                    j++, k--;
                    while (j<k && num[j] == num[j-1]) j++;
                    while (j<k && num[k] == num[k+1]) k--;
                }
            }
            while (i<num.size() && num[i] == num[i+1]) i++;
        }
        return rs;
    }
};