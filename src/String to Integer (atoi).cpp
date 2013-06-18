class Solution {
public:
    int atoi(const char *str) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int result = 0;
        int sign =1;
        if(str == NULL)
            return 0;
        while(*str == ' ')
            str++;
        if(*str == '+')
            str++;
        else if(*str == '-')
        {
            sign = -1;
            str++;
        }
        while(*str != '\0')
        {
            if(!(*str >= '0' && *str <= '9') && result == 0)
                return 0;
            else if(!(*str >= '0' && *str <= '9') && result != 0)
                break;
            result = result*10 + *str - '0';
            if(result%10 != *str - '0') //overflow
            {
                if(sign == 1)
                    return 2147483647;
                else
                    return -2147483648;
            }
            
            str++;
        }
        
        return sign * result;
    }
};