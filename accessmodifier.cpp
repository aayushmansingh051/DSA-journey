#include<iostream>
using namespace std;

class student {
    public:
    string name;
    float cgpa;

    void percentage() {
       cout << "Percentage: " << cgpa * 10 << "%" << endl;
    }
};

int main() {
    student s1;
    s1.name = "Aayushman Singh";
    s1.cgpa = 9.2;

    s1.percentage();
    cout << "Name: " << s1.name << endl;
    cout << "CGPA: " << s1.cgpa << endl;

    return 0;
}