#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10],i,j,p,q;
    printf("Enter order of matrix: \n");
    scanf("%d%d",&p,&q);
    printf("Enter %d elements: \n",p*q);
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            scanf("%d",*(a+i)+j);
        }
    }
    printf("Matrix is: \n");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            printf("%3d",*(*(a+i)+j));
        }
        printf("\n");
    }
}
