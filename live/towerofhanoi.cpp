#include<iostream>
using namespace std;
//no.of plates, source, helper, destination;
void TOH(int n,char A,char B,char C){
    if(n==0){
        return;
    }
    TOH(n-1,A,C,B);
cout<<A<<" TO "<<C<<endl;
    
    TOH(n-1,B,A,C);

}
int main(){
    int n;
cout<<"enter the no.of plates: ";
 cin>>n;
char A='A',B='B',C='C';
TOH(n,A,B,C);
}
