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
    string getcolour(){
        return colour;
    }
};



int main(){
 //car c0;
 cout<<endl;
 car c1("creta","white");
 cout<<"car colour: "<<c1.getcolour()<<endl;
cout<<"car name: "<<c1.getname()<<endl;

}