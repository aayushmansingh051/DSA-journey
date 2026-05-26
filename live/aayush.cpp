#include<iostream>
using namespace std;
void Reverse(int n){
    int original=n,y=0;
  while(n>0){
    int ld=n%10;
   
    y=y*10+ld;
      n=n/10;
    if(y==original){
        cout<<"the no. is palindrome";
    }else{
cout<<"the number is not palindrome";
        }
    }
    }

int main(){
    int x=123321;
    Reverse(x);KO
    return 0;
}