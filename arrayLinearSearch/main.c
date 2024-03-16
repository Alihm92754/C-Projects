#include <stdio.h>
#include <stdlib.h>

void search(int a[],int n,int key) {

    int i, flag=0, pos;
    for(i=0;i<n;i++) {
        if(a[i]==key) {
            flag=1;
            pos=i;
            break;
        }
    }
    if (flag==0)
        printf("Element is not found");
    else {
        printf("Element is found at position: %d",pos);
    }
}

int main()
{
    int a[10],i,n,key;
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter element to be searched: ");
    scanf("%d",&key);
    search(a,n,key);
}
