//WAP using pointer, DMA to search an element in an array of n numbers.
#include <stdio.h>
#include <stdlib.h>

// Function to search for an element using pointer
void search(int *arr, int n, int key) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("The element %d is found at index %d.\n", key, i);
            found = 1;
            break;  // Stop after first match
        }
    }
    if (!found) {
        printf("Element %d not found in the array.\n", key);
    }
}

int main() {
    int *arr;
    int n, key;

    // Prompt and read number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory dynamically
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    // Input key to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Call search function
    search(arr, n, key);

    // Free memory
    free(arr);

    return 0;
}