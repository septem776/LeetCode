class Solution {
public:
    bool isNumber(const char *s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        bool dot = false;
        bool e = false;
        if(*s == 0)
            return false;
        while(*s == ' ')
            s++;
        if(!(*s <= '9' && *s >= '0') && *s != '+' && *s != '-' && *s != '.')
            return false;
        if(*s == '.' && !(*(s+1) <= '9' && *(s+1) >= '0'))
            return false;
    check2:
        if(*s == '+' || *s == '-')
        {
            s++;
            if(!(*s <= '9' && *s >= '0') && *s != '.')
                return false;
            if(*s == '.')
            {
                dot = true;
                s++;
                if(!(*s <= '9' && *s >= '0'))
                    return false;
            }
        }
    check:
        while(*s <= '9' && *s >= '0')
        {
            s++;
        }
        if(*s != 0 && *s != 'e' && *s != '.' && *s != ' ')
            return false;
        if(*s == ' ')
        {
            while(*s == ' ')
                s++;
            if(*s != 0)
                return false;
            return true;
        }
        if(*s == '.')
        {
            if(dot)
                return false;
            dot = true;
            s++;
            goto check;
        }
        if(*s == 'e')
        {
            if(e)
                return false;
            dot = true;
            e = true;
            s++;
            if(!(*s <= '9' && *s >= '0') && *s != '+' && *s != '-')
                return false;
            goto check2;
        }
        return true;
    }
};