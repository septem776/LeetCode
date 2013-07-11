class Solution {
public:
    int ladderLength(string start, string end, unordered_set<string> &dict) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(start.size() != end.size())
            return 0;
        if(dict.size() == 0)
            return 0;
        int distance = 1;
        queue<string> quePush, quePop;
        quePop.push(start);
        while(dict.size() > 0 && !quePop.empty())
        {
            while(!quePop.empty())
            {
                string tmp(quePop.front());
                quePop.pop();
                for(int i=0; i<tmp.size(); i++)
                {
                    for(char j='a'; j<='z'; j++)
                    {
                        if(j == tmp[i])
                            continue;
                        char ori = tmp[i];
                        tmp[i] = j;
                        if(tmp == end)
                            return distance+1;
                        if(dict.count(tmp) > 0)
                        {
                            quePush.push(tmp);
                            dict.erase(tmp);
                        }
                        tmp[i] = ori;
                        
                    }
                }
            }
            swap(quePop, quePush);
            distance++;
        }
        return 0;
    }
};