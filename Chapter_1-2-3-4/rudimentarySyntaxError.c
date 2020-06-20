/* Write a program to check a C program for rudimentary syntax errors like unmatched parentheses, brackets and braces. Don't forget about quotes, both single and double,
    escape sequences, and comments.
 */

/*
 PUSH TO STACK IF ENCOUNTER WITH {(["'
 POP FROM STACK IF ENCOUNTER WITH  })]"'
 End of the file if stack is empty no syntax error
*/

#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int topIndex;
    unsigned capacity;
    char *_dataArr;
};


struct stack* stackCreate(unsigned capacity);
char stackPop(struct stack *s); // if stack is empty returns -1
void stackPush(struct stack *s,char _data);
int stackIsEmpty(struct stack* s); // if empty returns 1
int stackIsFull(struct stack *s); // if full returns 1


// Assume no stackoverflow
// It fails when '\''

int main(int argc, char const *argv[])
{
    struct stack *s =  stackCreate(1024);
    int c;
 	while((c = getchar()) != EOF){
 		if(c == '{' || c == '(' || c == '[' || c == '"' || c == '\'' )
 			stackPush(s,c);
 		if(c == '}' || c == ')' || c == ']' || c == '"' || c == '\'' ){
 			char _syntax = stackPop(s);
 			if(c == '}' && _syntax == '{')
 				;
 			else if(c == ')' && _syntax == '(')
 				;
 			else if(c == ']' && _syntax == '[')
 				;
 			else if(c == '"' && _syntax == '"')
 				;
 			else if(c == '\'' && _syntax == '\'')
 				;
 			else{
 				printf("SYNTAX ERROR\n");
 				exit(1);
 			}
 		}
 	}
    if(s->topIndex == -1){
        printf("No syntax error\n");
    }else{
        printf("Syntax error\n");
    }
    return 0;
}

struct stack* stackCreate(unsigned capacity){
    struct stack *s = (struct stack*)malloc(sizeof(struct stack));
    s->topIndex = -1;
    s->capacity = capacity;
    s->_dataArr = (char*)malloc(sizeof(s->capacity* sizeof(char)));
    return s;
}

int stackIsEmpty(struct stack* s){
    return s->topIndex == -1;
}

int stackIsFull(struct stack *s){
    return s->topIndex == s->capacity -1;
}

char stackPop(struct stack *s){
    if(stackIsEmpty(s)){
        return -1;
    }
    return s->_dataArr[s->topIndex--];
}

void stackPush(struct stack* s,char data){
    if(stackIsFull(s)){
        return;
    }
    s->_dataArr[++s->topIndex] = data;
    
}
