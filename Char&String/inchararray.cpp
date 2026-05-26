
#include<iostream>
#include<cstring>
using namespace std;
int main(){
char sentance[30];
cin.getline(sentance,30,'*');

cout<<"your word was: "<< sentance<< endl;   
cout<<"length: " << strlen(sentance)<<endl;
return 0;
}