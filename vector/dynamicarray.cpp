/*
#include<iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    int *arr= new int[size];
    int x=1;
    for(int i=0;i<size;i++){
        arr[i]=x;
        x++;
        cout<<arr[i]<<",";
        
    }

   

}*/
#include<iostream>
using namespace std;
int* func(){
    int *ptr= new int;
    *ptr=5;
    cout<<"ptr points to: "<<*ptr<<endl;
    return ptr;
    delete ptr;
    }
int main(){
    int *x=func();
    cout<<*x;             
    
}