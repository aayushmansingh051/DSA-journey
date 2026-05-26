#include<iostream>
#include<vector>
#include<string>
using namespace std;
template <class T>
class stack{
    vector<T> vec;
    public:
    void push(T val){
        vec.push_back(val);
    }
    void pop(){
        if(isEmpty()){
            cout<<"the stack is empty";
            return;

        }
        vec.pop_back();
    }
    T top(){
        if(isEmpty()){
            cout<<"stack is empty";
            return T();
        }
        int lastIndex=vec.size()-1;
        return vec[lastIndex];
    }
bool isEmpty(){
   return vec.size()==0;
}

};
int main(){
    stack<int>s;
    s.push(3);
    s.push(2);
    s.push(1);
    s.push(0);
while(!s.isEmpty()){
    cout<<s.top()<<" ";
    s.pop();
}
}
