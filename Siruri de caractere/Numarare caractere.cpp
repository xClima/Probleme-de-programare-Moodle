#include <stdio.h>

int main() {
    char c;
    unsigned uppercaseChars = 0;
    unsigned lowecaseChars = 0;    
    unsigned digits = 0;
    
    while(scanf("%c", &c) != EOF) {
        if(c >= 'a' && c <= 'z') {
            lowecaseChars++;
        } else if(c >= 'A' && c <= 'Z') {
            uppercaseChars++;
        } else if(c >= '0' && c <= '9'){
            digits++;
        }
    }
    printf("%u %u %u", lowecaseChars, uppercaseChars, digits);
    return 0;
}