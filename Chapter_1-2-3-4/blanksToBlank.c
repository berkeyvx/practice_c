#include <stdio.h>

/*Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or
more blanks by a single blank.*/

// TO COMPILE C ON CONSOLE clang program.c -o program

#define NONBLANK 'A';

int main(int argc, char const *argv[])
{
	int c,lastC;
	lastC= NONBLANK;

	while((c = getchar()) != EOF){
		if(c == ' '){
			if(lastC != ' '){
				putchar(c);
			}
		}
		else{
			putchar(c);
		}
		lastC = c;
	}
	return 0;
}