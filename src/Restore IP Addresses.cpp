class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<string> ret;
        string ip;
        partitionIP(s, 0, 0, ip, ret);
        return ret;
    }
    
    void partitionIP(string s, int startIndex, int partNum, string result, vector<string> &ret)
    {
        if(s.size() - startIndex > (4 - partNum) * 3)
            return;
        if(s.size() - startIndex < (4 - partNum) )
            return;
        if(startIndex == s.size() && partNum == 4)
        {
            result.pop_back();
            ret.push_back(result);
        }
        int num = 0;
        for(int i=startIndex; i<startIndex+3; i++)
        {
            num = num * 10 + s[i] - '0';
            if(num <= 255)
            {
                result += s[i];
                partitionIP(s, i+1, partNum+1, result+'.', ret); 
            }
            if(num == 0)
                break;
        }
    }
};