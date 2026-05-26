#include<iostream>
using namespace std;
int partion(int *arr,int s,int e){
int pivot=arr[s];
int cnt=0;
for(int i=s+1;i<=e;i++){
if(arr[i]<=pivot){
    cnt++;
}
}
int pivotIndex=s+cnt;
swap(arr[pivotIndex],arr[s]);
int i=s,j=e;
while(i<pivotIndex&&j>pivotIndex){
    while(arr[i]<arr[pivotIndex]) i++;
    
    while(arr[j]>arr[pivotIndex]) j--;



if(i<pivotIndex&&j>pivotIndex)
    swap(arr[i++],arr[j--]);

}

return pivotIndex;
}
void QuicSort(int *arr,int s,int e){
    if(s>=e){
        return;
    }
       int p =partion(arr,s,e);
       QuicSort(arr,s,p-1);
       QuicSort(arr,p+1,e);

    
}
int main(){
    int arr[]={2,9,7,5,4,3,4};
    int sz=sizeof(arr)/sizeof(int);

    QuicSort(arr,0,sz-1);
    for(int i=0;i<sz;i++){
        cout<<arr[i]<<",";
    }

}