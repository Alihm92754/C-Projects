#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    printf("Elements of the 2D array:\n");
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            printf("%4d", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
