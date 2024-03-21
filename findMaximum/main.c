#include <stdio.h>
#include <stdlib.h>

int findMaximum(int arr[], int size) {
    int max = arr[0]; //assume the first element is the maximum
    // Iterate through the array to find the maximum element
    for(int i=1;i<size;i++) {
        if(arr[i] > max)
            max=arr[i];
    }
    return max;
}

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d integers: ",size);
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    int maximum = findMaximum(arr,size);
    printf("The largest element in the array is: %d",maximum);
}
