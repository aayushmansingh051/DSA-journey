#include<iostream>
using namespace std;
int sum=0;
int  Sumofdigit(int n){
    while(n>0){
    int ld=n%10;
    
    sum=sum+ld;
    n=n/10;
    }
    return sum;
}
int main(){
    int x;
    cout<<"enter three digit no.";
    cin>>x;
    
    cout<<"the sum of 3 digit is:"<<Sumofdigit(x);
};