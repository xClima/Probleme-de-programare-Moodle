#include <stdio.h>
#include <stdlib.h>

struct Ip {
    unsigned char address[4];
    unsigned size;
};

struct Ip * readData(int n) {
    struct Ip * addresses = (struct Ip*) malloc(n * sizeof(struct Ip));
    int i;
    for(i = 0; i < n; i++) {
        scanf("%hhu.%hhu.%hhu.%hhu,%u ", 
                &addresses[i].address[0], 
                &addresses[i].address[1], 
                &addresses[i].address[2], 
                &addresses[i].address[3], 
                &addresses[i].size);
    }
    return addresses;
}

void getMinMax(struct Ip * addresses, int n, struct Ip * min, struct Ip * max) {
    *min = *max = addresses[0];
    int i;
    for (i = 0; i < n; i++) {
        if(min->size > addresses[i].size) *min = addresses[i];
        if(max->size < addresses[i].size) *max = addresses[i];
    }
}

int main() {
    int n;
    scanf("%d", &n);
    struct Ip * addresses = readData(n);
    struct Ip max, min;
    
    getMinMax(addresses, n, &min, &max);
    printf("%hhu.%hhu.%hhu.%hhu,%u\n%hhu.%hhu.%hhu.%hhu,%u\n",
            min.address[0], min.address[1], min.address[2], min.address[3], min.size,
            max.address[0], max.address[1], max.address[2], max.address[3], max.size);
    free(addresses);
    return 0;
}