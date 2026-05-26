#include<iostream>
using namespace std;
class queue{
int*arr;
int capacity;
int currsize;
int rear,f;
public:
queue(int capacity){
    this->capacity=capacity;
    arr=new int(capacity);
    currsize=0;
    f=0;
    rear=-1; 

}
void push(int data){
    if(currsize==capacity){
        cout<<"queue is FULL"<<endl;
    }else{
    rear=(rear+1)%capacity;
    arr[rear]=data;
    currsize++;
    }

}
void pop(){
    if(empty()){
        cout<<"the queue is empty";
        return;
    }else{
    f=(f+1)%capacity;
    currsize--;
    }

}
int front(){
     if(empty()){
        cout<<"the queue is empty";
        return -1;
     }else{
    return arr[f];

}
}
bool empty(){
    return currsize==0;


}


};
int main(){
    queue q(4);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(1);
    cout<<q.front()<<endl;
    q.pop();
        cout <<q.front()<<endl;
    q.push(5);
        cout <<q.front()<<endl;
}

