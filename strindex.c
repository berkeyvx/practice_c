/*
Write the function strindex(s,t) which returns the position of the rightmost
occurrence of t in s, or -1 if there is none.
*/

#include <stdio.h>
#include <string.h>

int strindex(char s[], char t[]);

int main(int argc, char const *argv[])
{
    char *s = "abcdefghh";
    char *t = "fgh";
    char *s2 = "abcdefabcde";
    char *t2= "abc";
    printf("%d\n",strindex(s,t));
    printf("%d\n",strindex(s2, t2));
    return 0;
}

int strindex(char s[], char t[]){
    int pos = 0;;
    int i,j,k;
    long sLen = strlen(s); // strlen returns long need coercion
    long tLen = strlen(t);
    for(i = sLen - 1; i >= 0; --i){
        k = i;
        for(j = tLen -1; j >= 0; --j){
            if(s[k--] != t[j]){
                pos = 0;
                break;
            }
            else{
                pos++;
            }
        }
        if(pos == tLen){
            return i - tLen + 1;
        }
    }

    return -1;
}
