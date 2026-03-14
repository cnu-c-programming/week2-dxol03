#include <stdio.h>

int main() {
    int age;       
    float gpa;     
    char grade;    

    
    scanf("%d %f %c", &age, &gpa, &grade);

    printf("%d %.2f %c\n", age, gpa, grade);

    return 0;
}
