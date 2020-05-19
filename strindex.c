/*
Write the function strindex(s,t) which returns the position of the rightmost
occurrence of t in s, or -1 if there is none. 
*/

#include <stdio.h>
#include <string.h>

int strindex(char s[], char t[]);

int main(int argc, char const *argv[])
{
	char *s = "abcdedfabcde";
	char *t = "abc";
	printf("%d",strindex(s,t));
	return 0;
}

int strindex(char s[], char t[]){
	int pos;
	int i,j,k;
	int sLen = strlen(s);
	int tLen = strlen(t);
	for(i = sLen - 1; i >= 0; --i){
		k = i;
		for(j = tLen -1; j >= 0; --j){
			if(s[k--] != t[j]){
				break;
			}
			return i-tLen;
		}
	}

	return -1;
}