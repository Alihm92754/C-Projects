#include <stdio.h>
#include <stdlib.h>

int main()
{
    float var;
    float *ptr1, *ptr2;

    ptr1 = &var; // point to the float variable
    ptr2 = ptr1 + 1; // point to the next memory location after the float variable

    size_t size = (char*)ptr2 - (char*)ptr1;

    printf("Size of float variable: %zu bytes\n", size);

    return 0;
}
