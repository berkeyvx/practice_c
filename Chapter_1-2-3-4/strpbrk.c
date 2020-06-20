/*
Write the function any(s1,s2), which returns the first location in a string s1 where any character from the string s2 occurs, or -1 if s1 contains no characters from s2.
 (The standard library function strpbrk does the same job but returns a pointer to the location.)
*/

#include<stdio.h>

int any(char* s1, char* s2);

int main(int argc, char const *argv[])
{
	char* s1 = "berke yavas";
	char* s2 = "b";
	char* s3 = "m";
	printf("%d\n",any(s1,s2));
	printf("%d",any(s1,s3));
	return 0;
}

int any(char* s1, char* s2){
	int index = 0;
	int i,j;
	for(i = 0; s1[i] != '\0'; i++){
		for(j = 0; s2[j] != '\0' && s1[i] != s2[j]; j++){
			;	
		}
		if(s2[j] == '\0' && s1[i+1] == '\0'){
			return -1;
		}
		else if (s1[i] == s2[j])
		{
			return i;
		}
	}
	return i; // symbolic return for warning
}

