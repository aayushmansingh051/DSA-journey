
#include<iostream>
using namespace std;
void print(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
void insertionsort(int *arr, int n){
    for(int i=1;i<n;i++){
        int currarr=arr[i];
        int previous=i-1;
        while(previous>=0 && currarr<arr[previous]){
            swap(arr[previous],arr[previous+1]);
            previous--;
        }
        arr[previous+1]=currarr;
    }
    print(arr,n); 

}
int main(){
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(int);
      insertionsort(arr,n);
}