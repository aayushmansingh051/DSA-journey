#include<stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    int *arr=malloc(n*sizeof(int));
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
    int smallest=arr[0];
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
           smallest=arr[i];
        }
        
    }
    printf("smallest element %d",smallest);
}