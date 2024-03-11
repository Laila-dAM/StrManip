#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void replaceCharInString(char *str, char oldChar, char newChar){
    while (*str != '\0'){
        if (*str == oldChar){
            *str = newChar;
        }

        str++;
    }
}