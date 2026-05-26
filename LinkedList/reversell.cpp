#include<iostream>
using namespace std;
class Node{
public:
int data;
Node*Next;

Node(int val){
    data=val;
    Next=NULL;
}
};
class List{
public:
Node*head;
Node*tail;
List(){
    head=NULL;
    tail=NULL;
}

void push_front(int val){
    Node*Newnode=new Node(val);
    if(head==NULL){
head=tail=Newnode;
    }else{
Newnode->Next=head;
head=Newnode;
    }
}
void printll(){
    Node*temp=head;
    while(temp!=NULL){
       
        cout<<temp->data<<"->";
         temp=temp->Next;
    }
cout<<"NULL";
}
void reverse(){
    Node*prev=NULL;
    Node*curr=head;
    Node*Next=NULL;
    while(curr!=NULL){
        Next=curr->Next;
        curr->Next=prev;
        prev=curr;
        curr=Next;
    }
    head=prev;
    cout<<endl;

}
};
int main(){
 List ll;  // ✅ Correct object creation
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);  // ✅ Fixed typo
    ll.printll();
    ll.reverse();
    ll.printll();
}
