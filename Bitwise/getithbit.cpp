#include<iostream>
using namespace std;
int setithbit(int num,int i){
    int bitmask=1<<i;
    return (bitmask|num);
}
int getithbit(int num,int i){
    int bitmask=1<<i;
    if((bitmask&num)==0){
        return 0;

    }
    else{
        return 1;
    }
}
int main(){
    cout<<getithbit(7,2)<<endl;
    cout<<setithbit(6,3);
}