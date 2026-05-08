#include<iostream>
using namespace std;
class car{
    public:
    string name;
    string colour;
    int *mileage;
    car(string name,string colour){
        this->name=name;
        this-> colour=colour;
        mileage =new int;
    }
    //deep
    car(const car& original){
        cout<<"copying..."<<endl;
        name=original.name;
        colour=original.colour;
        mileage=new int;
        *mileage=*original.mileage;
    }
    ~car(){
        cout<<"deleting object...\n";
        if(mileage!=NULL){
            delete mileage;
            mileage=NULL;
        }
    }
};
int main(){
    car c1("creta","white");
    *c1.mileage=15;

    car c2(c1);
    *c2.mileage = 10;
    cout<<c1.name<<endl;
    cout<<c2.name<<endl;
    cout<<c2.colour<<endl;
    cout<<*c1.mileage<<endl;
    cout<<*c2.mileage;
}

