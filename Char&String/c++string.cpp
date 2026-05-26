/*input and output of string "getline(space)"*//*
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str,'*');
    cout<<"the result is: "<<str;
}
*/

/*for each loop*/

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="Aayushman Singh";
    for(char ch:str){
        cout<<ch<<",";
    }
}