                  /*input output of Array

#include<iostream>
using namespace std;

int main(){
    int size = 5;
    int marks[size];

    // Taking input
    cout<<"enter marks: "<<endl;
    for(int i = 0; i < size; i++){
        cin >> marks[i];
    }

    // Displaying output
    cout << "Marks entered: ";
    for(int j = 0; j < size; j++){
        cout << marks[j] << " ";
    }
    
    return 0;
}*/


               /*smallest of array*//*

#include<iostream>
using namespace std;
int main(){
   int size=7;
    int nums[]={5,6,7,8,9,10};

    int smallest= __INT_MAX__;
    for(int i=0;i<size;i++){
        if (nums[i]<smallest){
            smallest=nums[i];
        }
    }

return 0;
}    */     
             /*LINEAR SEARCH*//*
#include<iostream>
using namespace std;
int linearsearch(int arr[], int sz, int target){       // int arr[] == *arr

    for(int i=0;i<sz;i++){
        if(arr[i]==target){
//found
return i;
        }
        }
        
return -1;//not found
    }


int main(){


    int arr[]={2,5,6,7,8,9};
    int sz=6;                                         //int sz= sizeof(arr)/sizeof(int)
    int target;
    cout<<"enter the value of target: ";
    cin>>target;
  cout<<  linearsearch(arr,sz,target);
    return 0;


}
    *//*
#include<iostream>
using namespace std;
int main(){
    int y;
    cout<<"enter the value";
    cin>>y;

    int arr[25]={5,7,6,5,4,3,3};
    
     int x= sizeof(arr)/sizeof(int);
   
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
for(int i=0;i<x;i++){
        cout<<arr[i];
    }
    
    return 0;

}    */ /*
#include<iostream>
using namespace std;
int linearsearch(int *arr,int sz,int target){
    for(int i=0;i<sz;i++){
        if( arr[i]==target){
        
        return i;
    }
}
return -1;






}
    int main(){
        int arr[]={4,6,7,8,9};
        int sz =sizeof(arr)/sizeof(int);
        int target;
        cout<<"enter the value of target: "<<endl;
        cin>>target;

        int result=linearsearch(arr,sz,target);

     cout<<result;
}
*/


           
#include<iostream>
 using namespace std;
int main(){
    int a=5;
    int *ptr=&a;
    cout<<*ptr<<endl;

    int arr[]={12345,2345,56,7};
    int sz=4;
    cout<<*(arr);//arr[o]
    cout<<*(arr+1);//arr[1]
    cout<<*(arr+2);//arr[2]
cout<<*arr+1;//12345+1 != *(arr+1)
}
