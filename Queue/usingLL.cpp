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
            cout<<"the dequeue is empty";
            return;
        }else{
        Node*temp=head;
        head=head->next;
        delete temp;
        }

    }
    int front(){
         if(empty()){
            cout<<"the dequeue is empty";
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
    q.push(50);
     q.push(40);
     q.push(30);
     while(!q.empty()){
         cout<<"queue front: "<<q.front()<<endl;//50
         q.pop();

     }
}