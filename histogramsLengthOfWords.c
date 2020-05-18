/* 
  Write a program to print a histogram of the lengths of words vertically in its input.
  TO RUN PROGRAM ./executable_program < text_file.txt
  EOF does not work on direct compile because EOF requires -1 but console provides \n
*/

#include <stdio.h>

#define MAXWORD 30 // max word count in sentence
#define MAXWORDLENGTH 10

int main(int argc, char const *argv[])
{
	int words[MAXWORD]; // store word length
	// set all elements of array to 0
	for(int i = 0; i < MAXWORD; i++){
		words[i] = 0;

	}
	int c, charCount, index;
	index = charCount = 0;
	while((c = getchar()) != EOF){
		charCount++;
		if(c == ' ' || c == '\t' || c == '\n'){ //
			words[index] = charCount - 1; // -1 because new line, tab or spaces
			index++;
			charCount = 0;
		}
	}

	// [3,5,1,4] for example MAXWORDLENGTH 10
	//
	//
	//
	//
	//
	//    *
	//    *   *
	//  * *   *
	//	* *   *
	//  * * * *
	// TODO:: Print histogram
	for (int i = 0; i < MAXWORDLENGTH; ++i) // how many lines decided by MAXWORDLENGTH
	{
		for (int j = 0; j < MAXWORD; ++j)	// iterate array
		{
			if(MAXWORDLENGTH-i > words[j]){
				putchar(' ');
			}
			else{
				putchar('*');
			}
		}
		printf("\n");
	}
	return 0;
}
