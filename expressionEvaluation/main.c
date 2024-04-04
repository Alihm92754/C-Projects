#include<stdio.h>

int main() {
    int a = 30, b = 50, c = 2, nbr;

    // Evaluates if a is less than b, result is 1 (true)
    // Then compares 1 with c, which is also true
    nbr = a < b < c;

    printf("%d\n", nbr); // Output: 1

    return 0;
}
