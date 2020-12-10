#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char ** readData(int wordCount) {
    int i;
    char ** words = (char**) malloc(wordCount * sizeof(char*));
    for(i = 0; i < wordCount; i++) {
        words[i] = (char*) malloc(21 * sizeof(char*));
        scanf("%s", words[i]);
    }
    return words;
}

int isvowel(char c) {
    switch(c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            return 1;
    }
    
    return 0;
}

int countWords(int wordCount, char ** words) {
    int result = 0, i;
    for(i = 0; i < wordCount; i++) {
        if(isvowel(words[i][0]) && isvowel(words[i][strlen(words[i]) - 1])) {
            result++;
        }
    }
    return result;
}

void deallocateMemory(int wordCount, char ** words) {
    int i;
    for(i = 0; i < wordCount; i++) free(words[i]);
    free(words);
}

int main() {
    int wordCount;
    scanf("%d", &wordCount);
    char ** words = readData(wordCount);
    int result = countWords(wordCount, words);
    deallocateMemory(wordCount, words);
    
    printf("%d", result);
    return 0;
}
