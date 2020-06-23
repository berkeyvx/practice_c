// Write the function strend(s,t), which returns 1 if the string t occurs at the
//end of the string s, and zero otherwise.

#include <stdio.h>
#include <string.h>

// compare strings from last
int strend(char *s, char *t){
	int len = strlen(t);
	while(*s-- != '\0'){} // go end of the string
	s++;
	while(*t-- != '\0'){} // go end of the string
	t++;
	
	while(len > 0){
		if(*s == *t){ // if they match go 1 lower in each string
			s--;
			t--;
			len--;
		}
		else
			return 0; // no match 
	}
	return 1;
}

int main(int argc, char const *argv[])
{
	// test variables
	char str1[] = "hello world";
	char str2[] = "worl";
	char str3[] = "rld";
	printf("%d\n", strend(str1,str2));
	printf("%d\n", strend(str1,str3));
	return 0;
}