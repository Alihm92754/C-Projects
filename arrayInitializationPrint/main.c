#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

int main() {
    int Array[SIZE], i = 0;

    // Fill the Array with consecutive integers starting from 1
    while (i < SIZE) {
        Array[i] = ++i;
    }

    // Print the last element of the Array
    printf("%d", Array[SIZE - i]);

    return 0;
}
