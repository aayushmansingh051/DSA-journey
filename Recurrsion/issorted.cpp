#include<iostream>
using namespace std;

bool isSorted(int *arr, int size){
    // Base case
    if(size == 0 || size == 1){
        return true;
    }

    // Check if current pair is out of order
    if(arr[0] > arr[1]){
        return false;
    }

    // Recurse on the rest of the array
    return isSorted(arr + 1, size - 1);
}

int main(){
    int arr[5] = {2, 5, 4, 6, 7};
    int size = 5;

    bool ans = isSorted(arr, size);
    
    if(ans){
        cout << "The array is sorted.";
    } else {
        cout << "The array is not sorted.";
    }

    return 0;
}