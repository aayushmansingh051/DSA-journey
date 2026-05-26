#include<iostream>
using namespace std;
class queue{
    int *arr;
    int f,r;
    int capacity;
    int currsize;
    public:
    queue(int capacity){
    this->capacity=capacity;
    f=0;
    r=-1;
    currsize=0;
arr=new int(capacity);
    }
    void push(int data){
        if(currsize==capacity){
            cout<<"queue is full: "<<data<<endl;
        }else{
      r=(r+1)%capacity;
      arr[r]=data;
      currsize++;  
        }
    }
    void pop(){

        f=(f+1)%capacity;
        currsize--;

    }
    int front(){
        return arr[f];

    }
    bool empty(){
 return currsize==0;
    }
    
};
int main(){
queue q(4);
q.push(5);
q.push(4);
q.push(3);
q.push(2);
q.push(1000);
q.push(2000);
q.push(3000);
while(!q.empty()){
    cout<<q.front()<<endl;
    q.pop();
}

}