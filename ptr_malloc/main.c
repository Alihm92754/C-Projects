#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr_malloc;
    int size_malloc = 6; //Initial size of the array

    //Allocate memory for an array of 5 integers
    ptr_malloc = (int*)malloc(size_malloc * sizeof(int));

    //check if memory allocation was successful
    if(ptr_malloc == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    //use the allocated memory
    printf("Using malloc: \n");
    for(int i=0;i<size_malloc;i++){
        ptr_malloc[i] = i+1;
        printf("%d ", ptr_malloc[i]);
    }
    printf("\n");

    //free dynamically allocated memory
    free(ptr_malloc);

    return 0;
}
