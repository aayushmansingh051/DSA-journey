//for 2*n tile,  tile=2*1
#include<iostream>
using namespace std;
int tiling(int n){
    if(n==0||n==1){ 
        return 1;
    }
    //vertical
    int ans1=tiling(n-1);
    //horizontal
     int ans2=tiling(n-2);
     return ans1+ans2;

}
int main(){
    int n;
    cout<<"the value of n: ";
    cin>>n;

  cout<<"total no.of ways: "<<tiling(n);
}
