#include<iostream>
using namespace std;
int currsum=0;
int sumofNno(int n){
    if(n==0){
        return 0;
    }
return n+sumofNno(n-1);
}
int main(){
cout<<  sumofNno(5);

}