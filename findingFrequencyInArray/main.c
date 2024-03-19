#include <stdio.h>
#include <stdlib.h>

void findFrequency(int arr[], int size) {
    int visited[size]; // Array to mark visited elements
    int frequency[size]; // Array to store frequency of elements

    // Initialize visited and frequency arrays to 0
    for (int i = 0; i < size; i++) {
        visited[i] = 0;
        frequency[i] = 0;
    }

    // Count frequency of each element
    for (int i = 0; i < size; i++) {
        if (visited[i] == 1) // If element is already counted, continue to the next iteration
            continue;

        // Count frequency of current element
        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = 1;
                count++;
            }
        }
        frequency[i] = count;
    }

    // Print frequency of each element
    printf("Element\tFrequency\n");
    for (int i = 0; i < size; i++) {
        if (visited[i] == 0) {
            printf("%d\t%d\n", arr[i], frequency[i]);
        }
    }
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    findFrequency(arr, size);

    return 0;
}
