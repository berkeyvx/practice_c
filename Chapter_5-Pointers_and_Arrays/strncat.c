//strncpy(s,t,n) copies at most n characters of t to s. 

#include <stdio.h>

void _strncat(char *s, char *t, int n){
	while(*s++ != '\0'){}
	s--; // go end of the s string
	while(n-- > 0 && *t != '\0'){
		*s++ = *t++;
	}
	*s = '\0';
}

int main(int argc, char const *argv[])
{
	char s[100] = "Hello ";
	char t[100] = "WorldHello";
	char t2[100] = "W";
	_strncat(s,t,5);
	printf("%s\n", s);
	return 0;
}