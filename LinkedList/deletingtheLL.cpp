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
~Node(){
    if(Next!=NULL){
        delete Next;
        Next==NULL;
    }
}
};


class List{
        Node*head;
        Node*tail;
    public:
        List(){
        head=NULL;
        tail=NULL;
        }
        ~List(){
            if(head!=NULL){
                delete head;
                head==NULL;
            }
        }

    
void push_front(int val){
    Node*Newnode=new Node(val);
    if(head==NULL){
        head=tail=Newnode;
    }
    else{
        Newnode->Next=head;
        head=Newnode;
    }
}
/*void pop_back(){
Node*temp=head;
while(temp->Next->Next!=NULL){
    temp=temp->Next;
}
temp->Next=NULL;
delete tail;
tail=temp;
}*/
int Searchitr(int key){
    Node*temp=head;
    int idx=0;
    while(temp!=NULL){
        if(temp->data==key){
            return idx;
        }
        temp=temp->Next;
        idx++;
    }
    return -1;
}

void Printlist(){
Node*temp=head;
while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->Next;
}
cout<<"NULL";
}
};
int main(){
    List LL;
    LL.push_front(3);
    LL.push_front(5);
    LL.push_front(6);
    
    LL.Printlist();
    //LL.pop_back(6);
    LL.Searchitr(5);
}
