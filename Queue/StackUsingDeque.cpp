#include<iostream>
#include<deque>
using namespace std;
class Queue{
    public:
deque<int>deq;
void push(int data){
deq.push_front(data);
}
void pop(){
deq.pop_front();
}
int front(){
return deq.front();
}
bool empty(){
return deq.empty();
}
};
int main(){
    Queue q;
    for(int i=0;i<=5;i++){
        q.push(i);
    }
    while(!q.empty()){
        cout<<q.front()<<" "<<endl;
        q.pop();
    }
}