#include<iostream>
using namespace std;
int Binarysearch(int arr[],int s,int e,int target){
    if(s>e){
        return -1;
   }
    int mid= s+(e-s)/2;
    if(arr[mid]==target){
        return mid;
    }
   else if(target<arr[mid]){
      return  Binarysearch(arr,s,mid-1,target);
    }
    else{
       return Binarysearch(arr,mid+1,e,target);
    }
     
}
int main(){
    int arr[]={4,5,6,7,8,9};
        int sz=sizeof(arr)/sizeof(int);
     int result=Binarysearch(arr,0,sz-1,10);
cout<<"the index found at index=: "<<result;
if(result==-1){
    cout<<"index not found";
}
    
}