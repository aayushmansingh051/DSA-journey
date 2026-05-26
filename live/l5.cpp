#include<iostream>
using namespace std;
void Reverse(int n){
    int original=n;
  while(n>0){
    int ld=n%10;
    int x=n/10;
    int y=ld*10+x;
    if(y==original){
        cout<<"the no. is palindrome";
    }else{
cout<<"the number is not palindrome";
        }
    }
    }

int main(){
    int x=123321;
    Reverse(x);
    return 0;
}