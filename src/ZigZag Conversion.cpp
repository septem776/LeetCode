class Solution {
public:
    string convert(string s, int nRows) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function   
        if(nRows == 1)
            return s;
        string result;
        char str[100];
        char ch[1000][1000];
        memset(ch, 0, sizeof(ch));
        int i=0, j=0;
        for(int k=0; k<s.length(); k++)
        {
            ch[i][j] = s[k];
            if(k%(2*nRows-2) < nRows-1)
            {
                i++;
            }
            else
            {
                i--;
                j++;
            }
        }
        for(int x=0; x<nRows; x++)
        {
            for(int y=0; y<=j; y++)
            {
                if(ch[x][y] != 0)
                {
                    result += ch[x][y];
                }
            }
        }
        return result;
    }
};