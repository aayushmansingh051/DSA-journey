/*
#include<iostream>
using namespace std;
int power(int x,int n){
    if(n==0){
        return 1;

    }
    int result=x*power(x,n-1);
    return result;
}
int main(){
   int x,n;
   cin>>x;
   cin>>n;
    cout<<power(x,n);

}*/
#include<iostream>
using namespace std;
int power(int x,int n){
    //base case
    if(n==0){
        return 1;
    }
    if(n==1){
        return x;
    }
    //Recursivecall
    int ans=power( x,n/2);
   //pow even
   if(n%2==0){
   return ans*ans;
}
   //odd
   else{
   return x*ans*ans;
}
}
int main(){
   int x,n;
   cin>>x;
   cin>>n;
    cout<<power(x,n);

}