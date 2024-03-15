#include <stdio.h>
#include <stdlib.h>

int isPrime(int n) {
    if(n <= 1)
        return 0;  // not prime
    if (n <= 3)
        return 1; // 2 and 3 are prime

    // check if n is divisible by any number from 2 to sqrt(n)
    for (int i=2; i*i <= n; i++) {
        if (n % i == 0)
            return 0; //not prime

    }
    return 1; //prime
}

int main()
{
    int n;
    printf("Enter a number to check if it's prime: ");
    scanf("%d", &n);

    if (isPrime(n))
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
}
