#include<iostream>
using namespace std;
int clearithbit(int num,int i){
    int bitmask=~(1<<i);
    num=num&bitmask;
    cout<<num;
}
int main(){
    clearithbit(6,1);
}