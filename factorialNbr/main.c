#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
    if(n == 0 || n == 1)
        return 1;
    else
        return n*factorial(n-1);
}

int main()
{
    int num;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d",&num);

    if(num < 0)
        printf("Factorial is not defined for negative numbers.\n");
    else
        printf("Factorial of %d is %d\n", num, factorial(num));

}
