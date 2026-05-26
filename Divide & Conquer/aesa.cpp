#include <stdio.h>

void merge(int arr[], int start, int mid, int end) {
    int len1 = mid - start + 1;
    int len2 = end - mid;

    int first[100], second[100]; // temp arrays (ensure 100 > size of actual array)
int mainIndex=start;
    for (int i = 0; i < len1; i++)
        first[i] = arr[mainIndex++];
    
    for (int i = 0; i < len2; i++)
        second[i] = arr[mainIndex++];

    int i = 0, j = 0, k = start;

    while (i < len1 && j < len2) {
        if (first[i] <= second[j])
            arr[k++] = first[i++];
        else
            arr[k++] = second[j++];
    }

    while (i < len1)
        arr[k++] = first[i++];
    
    while (j < len2)
        arr[k++] = second[j++];
}

void mergeSort(int arr[], int start, int end) {
    if (start < end) {
        int mid = start + (end - start) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

int main() {
    int arr[] = {1, 6, 4, 5, 9, 78, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

  

    mergeSort(arr, 0, n - 1);

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
        int a;
        
        scanf("&d",&a);
       printf("the value is %d: ",a);

    return 0;
}