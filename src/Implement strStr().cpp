class Solution {
public:
    char *strStr(char *haystack, char *needle) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int len = strlen(needle);
        if(len == 0)
            return haystack;
        while(*haystack)
        {
            if(*haystack == *needle && strncmp(haystack, needle, len) == 0)
                return haystack;
            haystack++;
        }
    }
};