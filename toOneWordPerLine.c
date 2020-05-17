#include <stdio.h>

/*
 Exercise 1-12. Write a program that prints its input one word per line.
 */

#define IN 1 // inside word
#define OUT 0 // outside word

int main(int argc, char const *argv[])
{
	int c,inWord;
	inWord = IN;
	while((c = getchar()) != EOF){
		if(c == ' ' ||  c == '\t'){
			inWord = OUT;
		}
		else if (inWord == OUT)
		{
			inWord = IN;
			putchar('\n');
			putchar(c);
		}
		else{
			putchar(c);
		}

	}
	return 0;
}