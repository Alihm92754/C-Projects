#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr_calloc;
    int size_calloc = 3; //Initial size of the array

    ptr_calloc = (int*)calloc(size_calloc, sizeof(int));

    //check if memory allocation was successful
    if(ptr_calloc == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    //use the allocated memory
    printf("Using calloc: \n");
    for(int i=0;i<size_calloc;i++){
        printf("%d ", ptr_calloc[i]);
    }
    printf("\n");

    //free dynamically allocated memory
    free(ptr_calloc);

    return 0;
}
