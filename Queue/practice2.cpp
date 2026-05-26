#include<iostream>
using namespace std;
class Node{
   public:
int data;
Node*next;

Node(int data){
this->data=data;
this->next=NULL;
}
};
class queue{
Node*head;
Node*tail;
public:
queue(){
    head=tail=NULL;
}
void push(int data){
Node*newnode=new Node(data);
 if(head==NULL){
        head=tail=newnode;
    }else{
tail->next=newnode;
tail=newnode;
}
}
void pop(){
    if(empty()){
        cout<<"the queue is empty";
        return;
        }else{
Node*temp=head;
head=head->next;
delete temp;
}
}

int front(){
     if(empty()){
        cout<<"the queue is empty";
        return -1;
     }
         return head->data;

}
bool empty(){
return head==NULL;
}
};
int main(){
    queue q;
    q.push(5);
    q.push(4);
    q.push(3);
    while(!q.empty()){
cout<<"values are: "<<q.front()<<endl;
q.pop();
    }
}