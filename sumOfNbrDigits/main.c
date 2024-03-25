#include <stdio.h>
#include <stdlib.h>

int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum = sum + num%10;
        num = num/10;
    }
    return sum;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int sum = sumOfDigits(num);
    printf("Sum of digits of %d is %d\n", num, sum);

}
