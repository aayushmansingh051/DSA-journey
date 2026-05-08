#include<iostream>
using namespace std;
class shape{
    public:
    virtual void draw()=0;     //Abstract function, pure virtual function
};
class circle:public shape{
public:
void draw(){
    cout<<"draw circle";
}
};
class square:public shape{
public:
void draw(){
    cout<<"draw square";
}
};
int main(){
circle c1;
c1.draw();
cout<<endl;
square s1;
s1.draw();
//shape s1;       error: variable type is an abstarion class
//s1.draw();
}