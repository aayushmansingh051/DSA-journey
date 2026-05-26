#include<iostream>
#include<vector>
#include<string>
using namespace std;

//creating stack using vector
template<class T>
class stack{
 vector<T> vec;
 public:
 void push(T val){
    vec.push_back(val);
 }
 void pop(){
    if(isEmpty()){
        cout<<"stack is emp";
        return;
    }
      vec.pop_back();
 } 
T top(){
    if(isEmpty()){
        cout<<"stack is empty.\n";
      return T();
    }
    int LastIndex=vec.size()-1;
    return vec[LastIndex];     // No return 2 1 0; 
 }
 bool isEmpty(){
 }
};
int main(){
    stack<int>s;
    s.push(3);
    s.push(2);
    s.push(1);
    
    /*stack<string>s;
     s.push("krishna");
    s.push("shree");
    s.push("jay");*/
    while(!s.isEmpty()){
        cout<<s.top()<<" ";
       s.pop();
    }
    return 0;
}
