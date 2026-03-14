#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    if (scanf("%d %d %c", &num1, &num2, &op) != 3) {
        return 1;
    }

    if (op == '+') {
        printf("%d\n", num1 + num2);
    } else if (op == '-') {
        printf("%d\n", num1 - num2);
    } else if (op == '*') {
        printf("%d\n", num1 * num2);
    } else if (op == '/') {
        if (num2 != 0) {
            printf("%d\n", num1 / num2); // 정수 나눗셈
        } else {
            printf("0으로 나눌 수 없습니다.\n");
        }
    }

    return 0;
}
