#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20], n, i;
    printf("Enter array size: \n");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++){  //Reading
        scanf("%d", &a[i]);
    }
    printf("Displaying array: ");
    for(i=0;i<n;i++){    //Displaying
        printf(" %d", *(a+i));
    }
}
