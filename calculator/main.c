#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operator;
    float num1, num2, result;
    char choice;

    do {
        // prompt the user for input
        printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &operator);

        // check if the operator is valid
        if(operator != '+' && operator != '-' && operator != '*' && operator != '/') {
            printf("Invalid operator! Please enter a valid operator.\n");
            continue; // restart the loop
        }

        // prompt the user to enter the numbers
        printf("Enter two numbers: ");
        scanf("%f %f",&num1, &num2);

        // perform the calculation based on the operator
        switch(operator) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if(num2 == 0) {
                    printf("Math Error! Denominator must be different from zero");
                    continue;
                }
                result = num1 / num2;
                break;
        }

        printf("Result: %.2f\n",result);

        // prompt the user if they want to continue
        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c",&choice);
    } while(choice == 'y' || choice == 'Y');

    printf("Thank you for using the calculator. Goodbye!\n");

    return 0;

}
