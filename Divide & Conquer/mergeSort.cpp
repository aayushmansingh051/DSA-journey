#include <iostream>
using namespace std;
void Merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    int len1 = mid + 1 - s;
    int len2 = e - mid;
    // 2 array create kiye
    int *first = new int[len1];
    int *second = new int[len2];
    // copy
    int mainarrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainarrayIndex++];
    }
    int mainIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainarrayIndex++];
    }
    // Merge two Sorted Array
    int index1 = 0;
    int index2 = 0;
    mainarrayIndex = s;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainarrayIndex++] = first[index1++];
        }
        {
            arr[mainarrayIndex++] = second[index2++];
        }

        while (index1 < len1)
        {
            arr[mainarrayIndex++] = first[index1++];
        }
    }
    while (index2 < len2)
    {
        arr[mainarrayIndex++] = second[index2++];
    }
    delete[] first;
    delete[] second;
}

void MergeSort(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    if (s >= e)
    {
        return;
    }
    // left side
    MergeSort(arr, s, mid);
    // Right side
    MergeSort(arr, mid + 1, e);
    // merge
    Merge(arr, s, e);
}
int main()
{
    int arr[7] = {1, 6, 4, 5, 9, 78, 3};
    int n = 7;
    MergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
}