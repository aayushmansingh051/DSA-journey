#include <iostream>
using namespace std;

class Animal {
public:
    string colour;

    void eat() {
        cout << "Animal eats food" << endl;
    }

    void breathe() {
        cout << "Animal breathes" << endl;
    }
};

class Mammal : public Animal {
public:
    string bloodType;

    Mammal() {
        bloodType = "Warm-blooded";
        colour = "Brown";
    }
};

class Dog : public Mammal {
public:
    void tailWagging() {
        cout << "Dog wags tail" << endl;
    }
};

int main() {
    Dog d1;

    cout << "--- Dog Object Behavior ---" << endl;
    d1.tailWagging();
    d1.eat();
    d1.breathe();
    cout << "Colour: " << d1.colour << endl;
    cout << "Blood Type: " << d1.bloodType << endl;

    return 0;
}