#include<iostream>
using namespace std;
//ABCD
int countfriendpairing(int n){
if(n<=2){
    return n;
}
//     remain single            + paired up
return 1*countfriendpairing(n-1)+(n-1)*countfriendpairing(n-2);

}
int main(){
    int n;
    cout<<"enter the no.of people: "<<endl;
    cin>>n;
    cout<<"NO.of people is been paired up or alone: "<<countfriendpairing(n);
}