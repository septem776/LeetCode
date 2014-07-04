class Solution {
public:
    bool isMatch(const char *s, const char *p) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
    	const char *str, *pat;
		bool star = false;
		for(str = s, pat = p; *str != '\0'; str++, pat++)
		{
			switch(*pat)
			{
			case '?':
				break;
			case '*':
				star = true;
				s = str;
				p = pat;
				do
				{
					p++;
				} while(*p == '*');
				if(*p == '\0')
					return true;
				pat = p-1;
				str = s-1;
				break;
			default:
				if(*pat != *str)
				{
					if(!star)
						return false;
					++s;
					str = s-1;
					pat = p-1;
				}
				break;
			}
		}
		
		while(*pat == '*')
			pat++;
		
		return (!*pat);
		
		
    }
};