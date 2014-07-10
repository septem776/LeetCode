class Solution {
public:
    int longestConsecutive(vector<int> &num) {
        unordered_set<int> numset;
        for(int i=0; i<num.size(); i++)
        {
            numset.insert(num[i]);
        }
        int maxlen = 0;
        unordered_set<int>::iterator it = numset.begin();
        while(!numset.empty())
        {
            int tofind = *it;
            int descendLen = 0, ascendLen = 0;
            numset.erase(it);
            for(int i = tofind - 1; numset.find(i) != numset.end(); i--)
            {
                descendLen++;
                numset.erase(i);
            }
            for(int i = tofind + 1; numset.find(i) != numset.end(); i++)
            {
                ascendLen++;
                numset.erase(i);
            }
            if(ascendLen + descendLen + 1 > maxlen)
                maxlen = ascendLen + descendLen + 1;
            it = numset.begin();
        }
        return maxlen;
    }
};