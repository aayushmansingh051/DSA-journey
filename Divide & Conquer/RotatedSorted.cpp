#include<iostream>
using namespace std;
int RoatedSorted(int*arr,int s,int e,int target){
    if(s>e){
        return -1;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==target){
        return mid;

    }
    if(arr[s]<=arr[mid]){//L1
        if(arr[s]<=target&&target<=arr[mid]){
          return  RoatedSorted(arr,s,mid-1,target);//left
        }else{
            return RoatedSorted(arr,mid+1,e,target);//right
        }

    }else{
        if(arr[mid]<=target&&target<=arr[e]){
           return RoatedSorted(arr,mid+1,e,target);//right

        }else{
           return  RoatedSorted(arr,s,mid-1,target);//left
        }
    }

}
int main(){
    int arr[]={2,3,4,5,6,0,1,2};
    int sz=sizeof(arr)/sizeof(int);
    int target=6;
    cout<<"INDEX:"<<RoatedSorted(arr,0,sz-1,target);
}