#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;

    Node(int val){
        data=val;
        next=NULL;
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
        Newnode->next=head;
        head=Newnode;
    }
}
void printlist(){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
        }
        cout<<"NULL";
}

};
int main(){
 List ll;  // ✅ Correct object creation
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);  // ✅ Fixed typo
    ll.printlist();
}
