/*
Write a recursive version of the function reverse(s), which reverses the
string s in place. 
*/

#include <stdio.h>
char* reverse(char *s,int index);

int main(int argc, char const *argv[])
{	
	char* s= "Berke Yavas";
	printf("%s",reverse(s,0));
	return 0;
}

void reverse(char s[]){
    int i, j;

    i = 0
    j = strlen(s)-1;
    swap(s, i, j);
    j--;
    i++;
    // Here is where the problem arises. When i don't call the function here the program works perfectly  (The limitation being only the first and last char get swapped) otherwise it gives an error saying segmentation fault
    if (i < j)
        reverse(s);
}