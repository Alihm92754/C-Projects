#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


int main()
{
    int *iptr,i,n;
    printf("Enter number of elements: \n");
    scanf("%d",&n);
    iptr = (int*)malloc(n*sizeof(int));
    printf("Enter %d elements: \n",n);
    for(i=0;i<n;i++)
        scanf("%d",iptr+i);
    printf("Displaying elements: \n");
    for(i=0;i<n;i++)
        printf("%4d",*(iptr+i));
    free(iptr);
}
