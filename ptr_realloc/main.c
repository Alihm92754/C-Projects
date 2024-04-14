#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr_realloc;
    int size_realloc = 8; // New size of the array

    // Allocate memory for an array of 5 integers
    ptr_realloc = (int*)malloc(size_realloc * sizeof(int));

    // Check if memory allocation was successful
    if (ptr_realloc == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Use the allocated memory
    printf("Using realloc:\n");
    for (int i = 0; i < size_realloc; i++) {
        ptr_realloc[i] = i + 1;
        printf("%d ", ptr_realloc[i]);
    }
    printf("\n");

    // Resize the previously allocated memory block to accommodate 8 integers
    ptr_realloc = (int*)realloc(ptr_realloc, size_realloc * sizeof(int));

    // Check if reallocation was successful
    if (ptr_realloc == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }

    // Use the reallocated memory
    printf("After realloc:\n");
    for (int i = 0; i < size_realloc; i++) {
        printf("%d ", ptr_realloc[i]);
    }
    printf("\n");

    // Free dynamically allocated memory
    free(ptr_realloc);

    return 0;
}
