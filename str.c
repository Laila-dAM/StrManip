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

    int wordStart = 0;
    int wordEnd = 0;
    while (wordStart < length) {
        while (sentence[wordEnd] !='' && sentence[wordEnd] !='\0'){
            wordEnd++;
        }

        int i = wordStart;
        int j = wordEnd - 1;
        while (i<j){
            char temp = sentence[i];
            sentence[i] = sentence[j];
            sentence[j] = temp;
            i++;
            j--;
        }
    }
    
}