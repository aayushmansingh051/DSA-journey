#include<iostream>
#include<string>
using namespace std;
class car{
string name;
string colour;

public:
car(){
    cout<<"constructor without parameter";
}
car(string name,string colour){
    cout<<"constructor with parameters";
    this->name=name;
    this->colour=colour;


}
void start(){
    cout<<"car has started";
}
    void stop(){
     cout<<"car has stoped";
    }
    string getname(){
        return name;
    }

};



int main(){
 car c1;    
}