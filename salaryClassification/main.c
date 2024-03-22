#include <stdio.h>

int main() {
    float salary;

    printf("Enter the salary of the employee: $");
    scanf("%f", &salary);

    if (salary >= 500 && salary <= 1000) {
        printf("Employee belongs to Class 3\n");
    } else if (salary > 1000 && salary <= 5000) {
        printf("Employee belongs to Class 2\n");
    } else if (salary > 5000 && salary <= 7000) {
        printf("Employee belongs to Class 1\n");
    } else {
        printf("Employee does not belong to any class\n");
    }

    return 0;
}
