// Write the program tail, which prints the last n lines of its input. By default, n is set to 10, let us say, 
// but it can be changed by an optional argument so that
//	tail -n
//prints the last n lines.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int DEFAULT_N = 10;


// printing in reverse

int main(int argc, char const *argv[])
{
	if(argc > 2){
		char s[10];
		strcpy(s, argv[2]);
		if(s[0] == '-'){
			DEFAULT_N = atoi(argv[2]);
			DEFAULT_N *= -1;
			while(DEFAULT_N-- > 0 && argc-- > 3){
				printf("%s ", argv[argc]);
			}
		}
		else{
			while(DEFAULT_N-- > 0 && argc-- > 2){
				printf("%s ", argv[argc]);
			}
		}
	}
	return 0;
}