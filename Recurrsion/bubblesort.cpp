#include<iostream>
using namespace std;
void Bubblesort(int*arr,int n){
    //base case
    if(n==0){
        return;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    Bubblesort(arr,n-1);
}
int main(){
    int arr[]={2,8,7,9};
    int n=4;
    Bubblesort(arr,n);
        cout << "The sorted array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}