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

void reverseWordsInSentence(char *sentence) {
    int length = strlen(sentence);

    int start = 0;
    int end = length - 1; 

    while (start < end)
    {
        char temp = sentence[start];
        sentence[start] = sentence[end];
        sentence[end] = temp;
        start++;
        end--;
    }
    
}