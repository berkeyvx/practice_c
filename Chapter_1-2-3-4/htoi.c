/*
Write a function htoi(s), which converts a string of hexadecimal digits (including an optional 0x or 0X) into its equivalent integer value.
 The allowable digits are 0 through 9, a through f, and A through F.
*/

#include <stdio.h>

int htoi(char*);

int main(int argc, char const *argv[])
{
    char *hexa = "0xff";
    printf("%d",htoi(hexa));
    return 0;
}


int htoi(char* hexaDigits){
    int i, value, hex;
    value = 0;
    hex = 0;
    i = 0; // index for string
    while(hexaDigits[i] != '\0'){
        if(hexaDigits[i] == '0'){
            i++;
            if(hexaDigits[i] == 'x' || hexaDigits[i] == 'X'){
                i++;
            }
        }
        else if(hexaDigits[i] <= 'F' && hexaDigits[i] >= 'A'){
            hex = hexaDigits[i] - 'A' + 10;
            i++;
        }
        else if(hexaDigits[i] <= 'f' && hexaDigits[i] >= 'a'){
            hex = hexaDigits[i] - 'a' + 10;
            i++;
        }
        else if(hexaDigits[i] <= '0' && hexaDigits[i] >= '9'){
            hex = hexaDigits[i] - '0';
            i++;
        }
        
        value = 16 * value + hex;
    }
    return value;
}
