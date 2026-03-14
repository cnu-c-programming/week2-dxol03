#include <stdio.h>

int main() {
    int a = -1;
    unsigned int b = 1;

    if (a < b) {
        printf("a < b\n");
    
    } else {
        printf("a >= b %u\n",a);
    }

    return 0;
}
