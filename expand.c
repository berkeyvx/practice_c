/*
Write a function expand(s1,s2) that expands shorthand notations like a-z in
the string s1 into the equivalent complete list abc...xyz in s2. Allow for letters of either case
and digits, and be prepared to handle cases like a-b-c and a-z0-9.
*/

#include<stdio.h>

#define MAX 1024;


void expand(char* s1, char* s2);

int main(int argc, char const *argv[])
{
    char s4[1024];
    char s1[] = "a-b-c";
    expand(s1,s4);
    printf("%s\n",s4);
    char s2[] = "a-z";
    expand(s2,s4);
    printf("%s\n",s4);
    char s3[] = "a-z0-9";
    expand(s3,s4);
    printf("%s\n",s4);
    return 0;
}

void expand(char* s1, char* s2){
    int index,i,c;
    index = 0;
    for(i = 0; s1[i] != '\0'; i++){
        if(s1[i+1] == '-'){
            s2[index] = s1[i];
            c = s1[i]; // points to char before '-'
            while(s2[index] != s1[i+2]){
                s2[++index] = ++c;
            }
            index++;
        }
        
    }
    s2[++index] = '\0';
}
