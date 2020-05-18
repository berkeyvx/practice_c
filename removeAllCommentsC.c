#include <stdio.h>

// Exercise 1-23. Write a program to remove all comments from a C program. Don't forget to handle quoted strings and character constants properly. C comments don't nest.
// For now it only deletes comments starts with /*
// To run this file cd into folder ./removeAllCommentsC.c < comments.txt

void deleteAllComments();


int main(int argc, char const *argv[])
{
	deleteAllComments();
	return 0;
}


void deleteAllComments(){
	int c,d,e;
	while((c = getchar()) != EOF){
		if (c == '/')
		{
			if ((d = getchar()) == '*')
			{
				while((e = getchar())){
					if(e == '*'){
						if((e = getchar()) == '/'){
							break;
						}
					}
				}

			}
		}
		else{
			putchar(c);
		}
	}
}