                                    /* WITH EXTRA SPACE *//* 
#include<iostream>
using namespace std;
  void printarr(int *arr ,int sz){
    for(int i=0;i<sz;i++ ){
        cout<<arr[i]<<" "<<endl;
    }
   
}
int main(){
    int arr[]={1,2,3,4,5}; 
    int sz= sizeof(arr)/sizeof(int);
    int copyarr[sz];
for(int i=0;i<sz;i++){
    int j=sz-i-1;
    copyarr[i]=arr[j];
}       
for(int i=0;i<sz;i++){
    arr[i]=copyarr[i];
      printarr(arr,sz);
}

return 0;
}
*/                                 
                                   /* WITHout EXTRA SPACE *//*
#include<iostream>
using namespace std;
int reverse(int *arr, int sz){
    for(int i=0; i<sz; i++){
        cout<<arr[i]<<" ";
}

    }

int main(){
    int arr[]={7,8,5,6,75,6};
    int sz=sizeof(arr)/sizeof(int);
     int start=0,end=sz-1;
    while(start<end){
       swap(arr[start],arr[end]);

   // int temp = arr[start];
   //arr[start]=arr[end];
    //arr[end]= temp;
    start ++; 
    end --;
}
cout<<"the reverse of numbers in array is: "<< reverse(arr,sz)<<endl;

}
*/
