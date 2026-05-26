s/*#include<iostream>
using namespace std;
void merge(int *arr1,int n,int *arr2,int m,int *arr3){
    int i=0,j=0,k=0;
    while(i<n&&j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k]=arr2[j];
             k++;
            j++;
        }
    }
        while(i<n){
             arr3[k]=arr1[i];
            k++;
            i++;
        }
        while(j<m){
            arr3[k]=arr2[j];
             k++;
            j++;
        

    }
}

void print(int *arr, int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}


int main(){
    int arr1[4]={1,2,3,4};
    int arr2[3]={5,6,6};
    int arr3[7]={0};

   merge(arr1,4,arr2,3,arr3);
   print(arr3,7);
}*/


#include<iostream>
using namespace std;
void merge(int *arr,int s,int e){
    int mid=s+(e-s)/2;
//2 array create...
int len1=mid+1-s;
int len2=e-mid;
int *first=new int[len1];
int *second=new int[len2];
//copy karna hai...
int mainarraIndex=s;
for(int i=0;i<len1;i++){
    first[i]=arr[mainarraIndex++];
}
for(int i=0;i<len2;i++){
    second[i]=arr[mainarraIndex++];
}
//merge karna hai...
int index1=0;
int index2=0;
mainarraIndex=s;
while(index1<len1 && index2<len2){
    if(first[index1]<second[index2]){
        arr[mainarraIndex++]=first[index1++];
    }
    else{
        arr[mainarraIndex++]=second[index2++];
    }
}
    while(index1<len1){
        arr[mainarraIndex++]=first[index1++];
    }
    while(index2<len2){
        arr[mainarraIndex++]=second[index2++];
    }

delete [] first;
delete [] second;
}
void mergesort(int *arr,int s,int e){
    int mid=s+(e-s)/2;
    if(s>=e){
        return;
    }
    //right ko sort
    mergesort(arr,s,mid);
    //left ko sort
    mergesort(arr,mid+1,e);
    //merge 
merge(arr,s,e);

}
int main(){
    int arr[]={2,9,7,6,8,10};
    int sz=sizeof(arr)/sizeof(int);

    mergesort(arr,0,sz-1);
     for(int i=0;i<sz;i++){
        cout<<arr[i]<<",";
    }
}