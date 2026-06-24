#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Student{
    public:
    string name;
    int marks;
     Student(string name , int marks){
        this->name=name;
        this->marks=marks;
     }
     // operator overloading
     bool operator < (const Student &obj)const{
         return this->name<obj.name;
     }
};
int main(){
   priority_queue<Student>pq;
   pq.push(Student("Aayushman",50));
   pq.push(Student("Aniket",40));
   pq.push(Student("Ajit mama",30));
   while(!pq.empty()){
      cout<<"top="<<pq.top().name <<","<<"marks="<<pq.top().marks<<endl;
      pq.pop();
   }
}