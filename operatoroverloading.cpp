#include<iostream>
using namespace std;
class complex{
    public:
    int real;
    int img;
    
    complex(int r,int i){
        real=r;
        img=i;
    }
    void ShowNum(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }
};
complex operator+( complex &c1, complex &c2){
    int resReal=c1.real+c2.real;
    int resimg=c2.img+c2.img;
 return complex(resReal,resimg);
};
int main(){
    complex c1(1,2);
    complex c2(2,3);
    c1.ShowNum();
    c2.ShowNum();
    complex c3= c1 + c2;
    cout<<"result is:";
    c3.ShowNum();
}