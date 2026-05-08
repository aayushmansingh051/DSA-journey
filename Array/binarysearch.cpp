/*#include<iostream>
using namespace std;
int binarysearch(int *arr,int sz, int key){
    int str=0, end=sz-1;
    while(str<=end){
        int mid = (str+end)/2;
        if(arr[mid]<key){
            str=mid+1;  //iska mtlb mid kaam hai toh aab  baat 2nd  half karenge

        }
        else if(arr[mid]>key){
            end=mid-1;//iska mtlb mid kaam hai toh aab  baat 1st  half karenge

        }
        else{
            return mid;
        }

        }
        return -1;
    }


int main(){
    int arr[]={1,2,3,4,5,6};
    int sz=sizeof(arr)/sizeof(int);    // sz=last index 0,1,2,3,5==5
    int key;
    cout<<"enter the value of key that need to be searched: ";
    cin>>key;
    cout<<binarysearch(arr,sz,key);

}*/
                   /*POINTER Arithmatic*/
#include<iostream>
using namespace std;
void printarr(int *ptr, int sz){
    for(int i=0;i<sz;i++){
        cout<<*(ptr+i);

    }
}


int main(){
    int arr[]={1,2,3,4,5};
    int sz= sizeof(arr)/sizeof(int);
printarr(arr,sz);
}
