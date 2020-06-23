//Write a pointer version of the function strcat that we showed in Chapter 2:
//strcat(s,t) copies the string t to the end of s.

#include<stdio.h>


void _strcat(char *s, char *t){
	while(*s != '\0'){
		s++; // go end of the s
	}
	// go 1 back
	s--;
	while(*t != '\0'){
		*s++ = *t++;
	}
}


int main(int argc, char const *argv[])
{
	char s[10] = "abc";
	char *t = "def";
	_strcat(s,t);
	printf("%s\n", s);
	return 0;
}