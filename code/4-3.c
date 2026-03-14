#include <stdio.h>

int main() {
    int n, i;
    int is_prime = 1; 

    if (scanf("%d", &n) != 1) return 1;

    if (n <= 1) {
        is_prime = 0;
    } else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                is_prime = 0; 
                break;        
            }
        }
    }

    if (is_prime) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
