#include<iostream>
using namespace std;
int friendspairing(int n){
    if(n==1||n==2){
        return n;
    }
    int ans1=friendspairing(n-1);
    int ans2=(n-1)*friendspairing(n-2);
    return ans1+ans2;

    
}
int main(){
    cout<<friendspairing(3);
}