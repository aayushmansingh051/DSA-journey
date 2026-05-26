#include<iostream>
using namespace std;
void oddoreven(int nums){
    if((nums&1)==0){
        cout<<"even";
    }
    else{
        cout<<"odd";

    }
  cout<<endl;
}
int main(){
    oddoreven(5);
    oddoreven(6);
}