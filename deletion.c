#include<stdio.h>
int display(int*arr,int sz){
    for(int i=0;i<sz;i++){
        printf("%d",arr[i]);
    }
}
int delet(int*arr,int sz,int index){
    for(int i=index;i<sz-1;i++){
        arr[i]=arr[i+1];
    }
    
    return sz-1;
}

int  main(){
    int arr[]={2,5,4,5,6};
    int sz=sizeof(arr)/sizeof(int);
    int index=2;
   sz= delet(arr,sz,index);
    display(arr,sz);
}