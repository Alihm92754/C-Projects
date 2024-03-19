#include <stdio.h>
#include <stdlib.h>

int find_freq(int a[], int n, int x) {
    int i,count=0;
    for(i=0;i<n;i++) {
        if(x == a[i])
            count++;
        if(a[i]>x)
            break;
    }
    return count;
}

int main()
{
    int a[10],n,i,x;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter element to be searched: ");
    scanf("%d",&x);
    printf("Frequency of %d is %d",x,find_freq(a,n,x));
}
