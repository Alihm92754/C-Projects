#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbr, originalNbr, reversedNbr = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &nbr);

    originalNbr = nbr;

    while(nbr != 0) {
        remainder = nbr % 10;
        reversedNbr = reversedNbr *10 +remainder;
        nbr = nbr / 10;
    }

    if (originalNbr == reversedNbr) {
        printf("%d is a palindrome.\n", originalNbr);
    }
    else {
        printf("%d is not a palindrome.\n", originalNbr);
    }

    return 0;
}
