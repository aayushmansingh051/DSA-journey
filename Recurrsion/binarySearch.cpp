#include<iostream>
using namespace std;

bool BinarySearch(int *arr, int start,int end, int key) {
   if(start > end) {
    return false;
   }
   int mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            return true;
        }
        if(arr[mid]<key){
            
return BinarySearch(arr,mid+1,end,key);
        }
    else{
            
return BinarySearch(arr,start,mid-1,key);
        }
    }

int main() {
    int arr[] = {2, 3, 4, 5, 6, 78, 6}; // This array should be sorted for binary search
    int n = 7;
    int key = 9;

  bool ans = BinarySearch(arr, 0,n-1, key);
    if (ans) {
        cout << "Value exists at index: " << ans;
    } else {
        cout << "Sorry, value not found";
    }
}