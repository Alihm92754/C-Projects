#include <stdio.h>
#include <stdlib.h>

void reverseArray(int arr[], int size) {
    int start = 0; //index of the first element
    int end = size - 1; //index of the last element

    //swap elements until start meets end
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        //move start index forward and end index backward
        start++;
        end--;
    }
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
    reverseArray(arr, size);
    printf("Reversed array: ");
    for(int i=0;i<size;i++)
        printf("%d ", arr[i]);
}
