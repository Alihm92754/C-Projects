#include <stdio.h>
#include <stdlib.h>

//Arithmetic Progression Series Sum Calculator

int main()
{
    int firstTerm, commonDifference, numTerms;
    float sum = 0;

    printf("Enter the first term of the arithmetic progression: ");
    scanf("%d", &firstTerm);
    printf("Enter the common difference: ");
    scanf("%d", &commonDifference);
    printf("Enter the number of terms: ");
    scanf("%d", &numTerms);

    for(int i=0;i<numTerms;i++) {
        sum = sum + firstTerm + i*commonDifference;
    }

    printf("Sum of the arithmetic progression series: %.2f\n", sum);

    return 0;
}
