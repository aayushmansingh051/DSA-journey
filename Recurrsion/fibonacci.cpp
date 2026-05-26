#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n==0){
        return 1;
    }
    return n*fibonacci(n-1);
}
int main(){
   cout<< fibonacci(2);
}