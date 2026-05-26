#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    int s=0;int e=n-1;
    for(int i=0;i<n/2;i++){
     int temp=arr[i];
     arr[i]=arr[n-i-1];
     arr[n-i-1]=temp;
    }
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
}