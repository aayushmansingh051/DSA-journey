#include<iostream>
using namespace std;
class Animal{
    public:
    string colour;
void eat(){
    cout<<"eats\n";
}
void breathe(){
    cout<<"breathes\n";
}
};
class fish:public Animal{
    public:
    void swim(){
        cout<<"swimms\n";
    }

};
int main(){
    fish f1;
    f1.swim();
    f1.eat();
    f1.breathe();

}