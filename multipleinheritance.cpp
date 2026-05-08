#include<iostream>
using namespace std;
class Teacher{
    public:
    int salary;
    string subject;
};
class Student{
    public:
    int rollno;
    float cgpa;

};
class A21: public Teacher,public Student{
    public:
    string name;
};
int main(){
A21 a;
a.name="Aayushman Singh";
a.rollno=24155447;
a.subject="C++";
a.cgpa=9.3;

cout<<a.name<<endl;
cout<<a.subject<<endl;
cout<<"CGPA"<<a.cgpa<<endl;
cout<<"Roll No."<<a.rollno;

}