#include <stdio.h>
#include <stdlib.h>

// function to print a line with n stars
void printStars(int n) {
    if(n > 0) {
        printf("*");
        printStars(n - 1);
    }
}

// function to print a triangle with n lines
void printTriangle(int n) {
    if (n > 0) {
        printTriangle(n - 1); // print previous lines
        printStars(n);        // print stars for the current line
        printf("\n");         // move to the next line
    }
}

int main()
{
    int height;

    // prompt the user to enter the height of the triangle
    printf("Enter the height of the triangle: ");
    scanf("%d", &height);

    // print the triangle
    printTriangle(height);

    return 0;
}
