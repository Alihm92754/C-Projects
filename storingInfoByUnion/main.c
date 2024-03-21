#include <stdio.h>
#include <stdlib.h>

union EmployeeInfo {
    char name[100];
    int age;
    float basicSalary;
    char mobileNo[20];
};

int main()
{
    union EmployeeInfo employee;

    printf("Enter employee name: ");
    scanf("%s", employee.name);

    printf("Enter employee age: ");
    scanf("%d", &employee.age);

    printf("Enter employee basic salary: ");
    scanf("%f", &employee.basicSalary);

    printf("Enter employee mobile number: ");
    scanf("%s", employee.mobileNo);

    printf("\nEmployee Information:\n");
    printf("Name: %s\n", employee.name);
    printf("Age: %d\n", employee.age);
    printf("Basic Salary: %.2f\n", employee.basicSalary);
    printf("Mobile Number: %s\n", employee.mobileNo);

    return 0;
}
