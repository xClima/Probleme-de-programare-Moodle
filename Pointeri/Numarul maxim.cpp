#include <stdio.h>
#include <stdlib.h>

void readData(short * v, int size) {
    int i;
    for(i = 0; i < size; i++) {
        scanf("%hd", v + i);
    }
}

short findMax(short * v, int size) {
    short max = -1000;
    int i;
    for(i = 0; i < size; i++) {
        if(v[i] > max) {
            max = v[i];
        }
    }
    return max;
}

int main() {
    int size;
    scanf("%d", &size);
    short * v = (short*) malloc(size);
    readData(v, size);
    short max = findMax(v, size);
    printf("%hd", max);
    return 0;
}